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

  printf("Put in the root number: ");
  int x = 0;
  scanf("%i", &x);
  printf("\n");

  node* a = malloc(sizeof(node));
  a->num = x;
  node* temp = a;
  node* temp2 = a;
  node* list = temp;










  int n = 0;
  while(n == 0){
    
    printf("Put in another number greater than before:");
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


    
    printf("Want to stop? Yes(1) or No (0)?\n");
    scanf("%i", &n);
    
    }

  }

  printf("\n");













  int nn = 0;
  while(nn == 0){
    
    printf("Put in another number lesser than before:");
    int y = 0;
    scanf("%i", &y);

    while(nn == 0){
      
      if (temp2->num > y){
        if (temp2->left == NULL){
          node* a = malloc(sizeof(node));
          temp2->left = a;
          temp2->left->num = y;
          break;
        }
        else{
          temp2 = temp2->left;
        }
      }

     
    
    printf("Want to stop? Yes(1) or No (0)?\n");
    scanf("%i", &nn);
    
    }

  }

  printf("\n");
  













  printf("    %i\n",list->num);

  for ( node* temp3 = list; temp3 != NULL; temp3 = temp3->right){
    if(temp3->num != list->num){
      printf("        %i\n",temp3->num);
    }
  }

  for ( node* temp4 = list; temp4 != NULL; temp4 = temp4->left){
      if(temp4->num != list->num){
      printf("%i\n",temp4->num);
    }
  }


}