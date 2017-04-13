#include <stdio.h>
struct node {
   int data;
   struct node *next;

};

struct node *start = NULL ;

insert(int a){
 struct node *new_node;
 new_node = (struct node *) malloc(sizeof(struct node *));
 new_node->data = a;

 new_node->next = start;
 start = new_node;

}

display(){
  struct node *new_node;
    new_node = start;
    printf(" the linked list is: " );

    while(new_node!=NULL){
        printf("%d-->",new_node->data);
        new_node = new_node->next;
    }

    printf("NULL\n");

}

 void delete(int n){
  struct node *temp1 = start;

  if(n==1){
    start = temp1->next;
    free(temp1);
  }

  else{
        int i;
  for(i=1;i<n-1;i++){
    temp1 = temp1->next;
  }
    struct node *temp2 = temp1->next ;
    temp1->next = temp2->next;
    free(temp2);

  }


}


int main()
{
    insert(6);
    insert(9);
    insert(76);
    insert(43);
    insert(16);

    display();
    int n;
    printf(" Enter the positon to be deleted: ");
    scanf("%d",&n);
    delete(n);
    display();

    return 0;


}



