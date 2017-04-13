#include <stdio.h>
int main ()
{
    int arr[10],i=0,j=0,item,n;
    printf("enter the total elements\n");
    while(scanf("%d",&n) !=EOF){


    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
     printf("before search\n ");
    for(i=0;i<n;i++){
        printf("arr[%d] = %d \n",i,arr[i]);

    }
    printf("Enter the item\n");
    scanf("%d",&item);
    while(j<n){
            if(arr[j]==item){
                break;
            }
      j++;
    }

   if(j==n)
     printf("Not found\n");
   else
      printf("the %dth element found at %d position\n",item,j+1);

   }

    return 0;
}
