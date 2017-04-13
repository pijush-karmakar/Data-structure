/// decending order ( selecting sort ) ...... ///

#include <iostream>
using namespace std;

void selection_sort(int *A, int n)
{
    int temp,i,j,min;
    for(i=0;i<n-1;i++)
    {
         min = i;
        for(j=i+1;j<n;j++)
        {
            if( A[j] < A[min] )
            {
                min = j;
            }
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
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

    selection_sort(arr,n);

    cout<< " Sorted list is:  ";

    for(i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
}
