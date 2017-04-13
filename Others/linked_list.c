#include <stdio.h>

struct node{
  int data; // data field
  struct node *next; // link field

};

 struct node *start = NULL;

int main ()
{
    char ch;
    struct node *new_node, *current_node; // to pointer variable
    do{
            new_node = (struct node *) malloc(sizeof(struct node)); // allocate memory address
            printf("\nEnter the data\n");
            scanf("%d", &new_node->data);
            new_node->next = NULL;
            if(start==NULL){
                start = new_node;
                current_node = new_node;
            }
            else{
                current_node->next = new_node;
                current_node = new_node;
            }
           printf("Do you enter another node: ");
           ch = getche();
    }
   while(ch!='n');

   printf("\nThe linked list is: ");
   while(start!=NULL){
    printf("%d-->",start->data);
    start = start->next ;
   }

    printf("NULL");

}
