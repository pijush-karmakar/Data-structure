
/// Bubble Sort code ..................       ///

#include <stdio.h>
int main ()
{
     int i,j,k,n,temp;
     printf("Enter total element number: ");
     scanf("%d",&n);
     int arr[n] ;
     printf("Enter the array elements: \n");
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]) ;
     }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
          for(k=0;k<n;k++){
          printf(" %d  ",arr[k]);
        }
        printf("\n");
    }
    printf("\n");

   }


}
