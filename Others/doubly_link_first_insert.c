/*
#include <stdio.h>
struct{
      int data;
   struct node *next;
   struct node *prev;
};

struct node *head = NULL ;

void insert(){
 struct node *new_node;
 //int n;

    new_node = (struct node *) malloc(sizeof(struct node *));
    printf("\nEnter the data\n");
    scanf("%d",&new_node->data);
    new_node->next =NULL;
    new_node->prev =NULL;

  if(head==NULL){
     head = new_node;
    // temp_node = head;
  }

  else{
    head->prev = new_node;
    new_node->next = head;
    head = new_node;

  }

}

void display(){
    struct node *temp=head;

    printf(" the linked list is: " );

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n");
 }


int main ()
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

}  */

#include <stdio.h>
struct{
      int data;
   struct node *next;
   struct node *prev;
};

struct node *head = NULL ;

void addlast(int value){
  struct node *tptr;
  struct node *nptr = (struct node *) malloc(sizeof(struct node *));
//  nptr->prev=NULL;
  nptr->data=value;
  //nptr->next=NULL;

  if(head==NULL){
     head = nptr;
     tptr = head;


  }
  else{
     tptr->next = nptr;
     nptr->prev = tptr;
     tptr = nptr ;
  }


}


void display(){
  printf(" The linked list is : ");
   struct node *tptr=head;

    while(tptr!=NULL){
        printf("%d ",tptr->data);
        tptr = tptr->next;
    }

    printf("\n");
}

int main ()
{
    addlast(4);
    display();
    addlast(7);
    display();

}
