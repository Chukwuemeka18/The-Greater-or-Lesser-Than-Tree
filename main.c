#include <stdio.h>
#include <stdlib.h>
 //typedef char* string;

typedef struct node{

  int num;
  struct node* left;
  struct node* right;

}
node;

/*


///////////////////////

compare root to x

if x > root->num:

  if root->right = null:
    new root
    right = new root
    root->right->num = x

////////////////////////

compare root to x

if x > root->num 

  if root->right = null:
    new root
    right = new root
    root->right->num = x

  if root->right != null:
    compare root-right->num to x
    
    if root-right->num < x
      if root->right->rightt = null:
        new root
        right = new root
        root->right->rightt->num = x



*/

int main(void){

  printf("Put in a number:");
  int x = 0;
  scanf("%i", &x);

  node* a = malloc(sizeof(node));
  a->num = x;
  node* temp = a;
  node* list = temp;

  int n = 0;
  while(n == 0){
    
    printf("Put in another number:");
    int y = 0;
    scanf("%i", &y);

    while(n == 0){
      
      if (temp->num < y){
        if (temp->right == NULL){
          node* a = malloc(sizeof(node));
          temp->right = a;
          temp->right->num = y;
          break;
        }
        else{
          temp = temp->right;
        }
      }
    
    printf("Want to stop? Yes(1) or No (0)?");
    scanf("%i", &n);
    
    }

  }







  int nn = 0;
  while(nn == 0){
    
    printf("Put in another number:");
    int y = 0;
    scanf("%i", &y);

    while(nn == 0){
      
      if (temp->num > y){
        if (temp->left == NULL){
          node* a = malloc(sizeof(node));
          temp->left = a;
          temp->left->num = y;
          break;
        }
        else{
          temp = temp->left;
        }
      }
    
    printf("Want to stop? Yes(1) or No (0)?");
    scanf("%i", &nn);
    
    }

  }

  

for ( node* temp2 = list; temp2 != NULL; temp2 = temp2->right){
    printf("%i\n",temp2->num);
  }


}