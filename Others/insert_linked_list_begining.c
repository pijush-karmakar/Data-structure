#include <stdio.h>
struct node {
   int data;
   struct node *next;

};

struct node *start = NULL ;

 void insert(){
     struct node *new_node;
     new_node = (struct node *) malloc(sizeof(struct node));
     printf("\nEnter the data\n");
     scanf("%d",&new_node->data);
     new_node->next = NULL;
     if(start==NULL){
        start = new_node;
     }
     else{
        new_node->next = start;
        start = new_node;
     }

 }

 void display(){
    struct node *new_node;
    new_node = start;
    printf(" the linked list is: " );

    while(new_node!=NULL){
        printf("%d-->",new_node->data);
        new_node = new_node->next;
    }

    printf("NULl\n");
 }

int main()
{
    char ch;
    do{
       insert() ;
    display() ;
    printf("Do you enter another node\n");
    ch=getche();
    }
    while(ch!='n');

    return 0;

}
