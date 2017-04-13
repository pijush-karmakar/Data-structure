#include <stdio.h>
#define MAXSIZE 4

int stack[MAXSIZE] ;
int top = -1 ;
void push(int item){
  if(top==MAXSIZE - 1){
    printf(" Stack overflow\n") ;

  }
  else{
     top++;
     stack[top] = item;
     printf(" %d is pushed on the stack\n",item);
  }

}

void pop(){
    int item;
    if(top == -1){
        printf(" Stack underflow\n");
    }
    else{
        item = stack[top];
        top--;
        printf(" %d is poped on the stack\n",item);
    }
}

void show(){
  int i;
  for(i=top;i>=0;i--){
    printf(" |----> %d\n",stack[i]);

  }

}



int main ()
{
    int x, num;
    char option;

    do{
            printf(" press 1 for push\n");
            printf(" press 2 for pop\n");
            printf(" press 3 for show\n");

            printf("Enter your choice :  ");
            scanf("%d",&num);

            switch(num)
               {
            case 1:
                printf(" Enter item :  ");
                scanf("%d",&x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;

            default: printf("Wrong Input\n");

            }

            printf("Do you want to continue Y/N ? --> ");
            option = getche();
            printf("\n");
    }

    while(option=='y' || option!='n');


    return 0;

}
