#include <stdio.h>
int main ()
{
    int num,position,element,i;
    int arr[10];
    printf("Enter the array length\n");
    scanf("%d",&num);
    printf("Enter the array elements\n");
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements before insertion\n");
     for(i=0;i<num;i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }

    // insert elements
    printf("Enter the element to be insert\n");
    scanf("%d",&element);
    printf("Enter the position\n");
    scanf("%d",&position);
    printf("Printing array after insertion\n");
    for(i=num-1;i>=position;i--){
        arr[i+1] = arr[i];
    }
   num++;
    arr[position] = element;

    for(i=0;i<num;i++){
        printf("arr[%d] = %d \n",i,arr[i]);
    }

    return 0;





}
