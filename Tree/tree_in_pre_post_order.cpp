#include <iostream>
using namespace std;

struct node{
   int data;
   node*left = NULL;
   node*right = NULL;
};

node* root = NULL ;

void add(int value){
   node* nptr = new node;
   nptr->data = value;
   nptr->left = NULL;
   nptr->right = NULL;

   if(root==NULL){
      root = nptr;
   }
   else{
     node *tptr = root;
     while(true){
       if(tptr->data > value)
          {
                  ///  left subtree
                  if(tptr->left == NULL){
                     tptr->left = nptr;
                     break;
                  }
                  else{
                    tptr = tptr->left;
                  }

         }

     else
         {
               /// Right subtree
                if(tptr->right == NULL){
                    tptr->right = nptr;
                    break;
                }
                else{
                    tptr = tptr->right;
                }
         }

     }

   }


}

/// for searching

void search(int value){
   node *tptr = root;
   while(true){
       if(tptr==NULL || tptr->data==value)
       {
           break;
       }
       else
       {
           if(tptr->data>value)
           {
               tptr = tptr->left;
           }
           else
           {
               tptr = tptr->right;
           }
       }
   }

   if(tptr==NULL)
   {
       cout<< " value: "<< value <<" ===> Not Found "<<endl;
   }
   else
   {
       cout<< " value: " << value <<" ===> Found " << endl;
   }

}



void print(node * Node){
    if(Node!=NULL){


      /*
        ====> In order
       print(Node->left);
       cout<<Node->data<<" ";
        print(Node->right);
         */

     /*
        ====> pre order
        cout<<Node->data<<" ";
       print(Node->left);
        print(Node->right);     */



       //  ====> post order

       print(Node->left);
        print(Node->right);
        cout<<" "<< Node->data <<" ";

    }
}


int main ()
{

 /// print in post order......
    add(50);
    add(15);
    add(75);
    add(81);
    add(77);
    add(30);
    add(99);
    add(64);
    add(3);
    add(35);
    add(18);

    print(root);

/// call search function........
    cout<<endl;
    cout<<" Searching .......... "<<endl;
    search(30);
    search(20);

}



