
#include <iostream>
using namespace std;

 insertion_sort(int *A, int n)
 {
    int temp,j,i;

     for(i=1;i<=n-1;i++)
     {
         temp = A[i];
         j = i;
         while(j>0 && A[j-1] > temp)
         {
             A[j] = A[j-1];
             j--;
         }

        A[j] = temp;

    }
 }


int main ()
{
    int i,n;
    cout<<" Enter the array size : ";
    cin>>n;
    int arr[n];
    cout<<" Enter the array elements "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr,n);

    cout<< " Sorted list is:  ";

    for(i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }


}











