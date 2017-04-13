#include <stdio.h>
int main ()
{
    int arr[10],num,position,i;
    printf("Enter the total number of elements\n");
    scanf("%d",&num);
    printf("Enter the array elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Before deletion\n");
    for(i=0;i<num;i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }

    // delete operation
    printf("Enter the position of element to be delete\n");
    scanf("%d",&position);

    for(i=position+1;i<=num-1;i++){
        arr[i-1] = arr[i];
    }
    num--;

    printf("After deletion\n");
     for(i=0;i<num;i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }

    return 0;
}
