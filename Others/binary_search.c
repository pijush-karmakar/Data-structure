
///  Binary Search code ...........  ///

#include <stdio.h>
int main ()

{
  int arr[13] = { 12,23,30,32,38,42,50,60,65,70,85,90,92} ;
  int start = 0, end = 12, mid ;
  int key = 32;
  do
  {
      mid = (int) ((start+end)/2) ;
      if(arr[mid] ==key ){
         printf("Find at %d ",mid+1);
         break;
      }
      else if(arr[mid]>key )
      {
          end = mid-1;
      }
       else
      {
           start= mid+1;
      }

      printf("start: %d\tEnd: %d\tMid: %d\tKey: %d\t arr[mid]: %d\n " , start,end,mid,key,arr[mid] ) ;
  }

  while(start<=end);

    if(start>end)
  {
      printf("Fail ");
  }


  return 0;

}
