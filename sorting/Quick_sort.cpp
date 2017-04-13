#include <iostream>
using namespace std;

int partition (int *A, int start, int end)
{
    int pivot = A[end] ;
    int partitionIndex = start ;
    for(int i = start;i<end;i++)
    {
        if(A[i]<=pivot)
        {
            swap(A[i],A[partitionIndex]) ;
            partitionIndex++;
        }
    }

    swap(A[partitionIndex],A[end]) ;
    return partitionIndex;
}


void Quicksort(int *A, int start, int end)
{
    if(start<end)
    {
        int partitionIndex = partition(A,start,end) ; /// Calling partiton ......
        Quicksort(A,start,partitionIndex-1);
        Quicksort(A,partitionIndex+1,end) ;
    }
}


int main ()
{
    int A [] = {7,6,5,4,3,2,1} ;
    Quicksort(A,0,6);
    cout<<"QuickSort Is ==> ";
    for(int i=0;i<7;i++)
    {
        cout<<A[i] << " ";
    }
    cout<<endl;
}


