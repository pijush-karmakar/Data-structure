#include <iostream>
using namespace std;

const int size = 4 ;
int queue[size],front=0,rear=0;

void enqueue(int value)
{
        if(rear==size)
        {
            cout<<" \nQueue is full "<<endl;

        }

        else
        {

         cout<<endl;
         cout<<value<< " Added " ;
          queue[rear] = value;
        }
        rear++ ;

}

void dequeue()
{
    int value;
    if(front==rear)
    {
        cout<<endl<< " Queue is empty "<<endl;
    }
    else
    {
        front = front + 1;

        //cout<< value << " is removed from queue "<<endl;
    }
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

    int value,num;
   char option;


       do{
          cout<<" press 1 for Queue"<<endl;
          cout<<" press 2 for DQueue"<<endl;
          cout<<" press 3 for Show"<<endl;

            cout<<"Enter your choice :  ";
            cin>>num;

            switch(num)
               {
            case 1:
                cout<<" Enter the value : "<<endl;
                cin>>value;
                enqueue(value);
                break;
            case 2:
                cout<<"Enter the value to delete : "<<endl;
                cin>>value;
                dequeue();
                break;
            case 3:
                display();
                break;

            default: cout<<"Wrong Input"<<endl;

            }

            cout<<"Do you want to continue Y/N ? --> ";
            cin>>option;
            cout<<endl;
    }
/*
    enqueue(23);
    enqueue(45);
    enqueue(16);
    enqueue(57);

    display();

 do
    {

        cout<<" Do you wanna remove the value: ";
        cin>>option;
        cout<<endl<< " Enter the value to delete:  "<<endl;
        cin>>del;

         dequeue(del);
        display();




    }   */
    while(option=='y' || option!='n');

   return 0;



}

