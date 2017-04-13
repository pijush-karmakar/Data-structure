#include <iostream>
using namespace std;

const int size = 5;
int heap[size];
int count;

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

void print()
{
    cout<<" Heap : "<<endl;
    for(int i=1;i<=count;i++)
    {
        cout<<heap[i]<<" ";

    }
    cout<<endl;

}


int main ()
{
    insert(50 );
    insert( 30);
    insert( 500);
    insert(10 );

    print();

}


