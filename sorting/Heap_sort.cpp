#include <iostream>
using namespace std;

const int size = 5;
int heap[size];
int count;

/// Adjust top function  .........

void adjust_top(int first_index, int end_index)
{
    int item = heap[first_index] ;
    int i = first_index*2;
    while(i<=end_index)
    {
        if( i+1<=end_index && heap[i+1 > heap[1] ] )
        {
            i = i+1;
        }
        else if(item>=heap[i])
        {
            break;
        }
        else
        {
            heap[i/2] = heap[i];
            i = i*2;
        }

        heap[i/2] = item;

    }
}

/// Add bottom function ........

void add_bottom(int first_index, int end_index)
{
    int item = heap[count];
    int i = count;
    while( i/2 >= 1 )
    {
        if( heap[i/2] < item )
        {
            heap[i] = heap[i/2] ;
            i=i/2;
        }
        else
        {
            break;
        }
        heap[i] = item;
    }
}


///  Inserting  heap .........

void insert(int value)
{
    if(count < size-1)
    {
        count++;
        heap[count] = value;
        add_bottom( count, 1);
    }
    else
    {
        cout<< "Heap is full " <<endl;
    }
}

void heapsort()
{
    for(int i=count;i>1;i--)
    {
        int temp = heap[i];
        heap[i] = heap[1];
        heap[1] = temp;
        adjust_top(1,i-1);
    }
}


void print()
{
    cout<<"Heap is ==> ";
    for(int i=1;i<=count;i++)
    {
        cout<< heap[i] <<" ";

    }
    cout<<endl;

}

/// For sorted

void display()
{

    for(int i=1;i<=count;i++)
    {
        cout<< heap[i] <<" ";

    }
    cout<<endl;

}


int main ()
{
    insert(50 );
    print();
    insert( 30);
    print();
    insert( 500);
    print();
    insert(1000);
    print();

   cout<<" Sorted Heap is ==> ";
   heapsort();
   display();


}



