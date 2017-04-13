#include <iostream>
using namespace std;

const int size = 4 ;
int queue[size],front=0,rear=0,value;

void enqueue()
{
        if(rear==size)
        {
            cout<<" \nQueue is full "<<endl;

        }

        else
        {
          //cout<<endl;
         // cout<<value<< " Added " ; /// without input ....
         cout<< endl << "Enter the value : ";
          cin>> value;
          queue[rear] = value;
        }
        rear++ ;

}

void display()
{
      if(front==rear)
      {
          cout<<" Queue Is Empty " << endl;
      }
      else
      {
        cout<<"\nElements in current queue ==> ";

          int temp = front ;
          for(int i=temp;i<rear;i++)
         {
             cout<<queue[i]<<" ";
         }
         cout<<endl;
      }

}

int main ()
{
    char ch;
    do
    {
         enqueue();
         display();

   /* enqueue();
    display();

    enqueue();
    display();

    enqueue();
    display();  */
    cout<<" Do you continue added the value: ";
    cin>>ch;

    }
    while(ch!='n');



}
