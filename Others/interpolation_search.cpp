
#include <iostream>
using namespace std;

//Print array values....
void print_ar (int arr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
    cout << endl;
}

// interpolation search .....
int interpolation_search (int arr[], int key, int n)
{
     int start = 0, end = n-1 ;
     int pos;
    while(start<=end && key>=arr[start] && key<=arr[end])
  {
      pos = start + (((double)(end-start) / (arr[end]-arr[start])) * (key-arr[start]) );

      if(arr[pos] == key){
       return pos;
      }
      else if(key > arr[pos]){
         start = pos+1;
      }
      else{
        end = pos-1;
      }


  }

  return -1;

}

int main()
{
    int arr [] = {12, 23, 30 ,32 ,38, 42 ,50 ,60, 65 ,70,85 ,90 ,92};
    int key, position;

      cout << "Your Array : ";
      print_ar (arr, 13);

  cout << "Enter the value to search : ";
  cin >> key;

  position = interpolation_search (arr, key, 13);

if (position != -1)
  {
    cout << "Value Found! at position : " << position + 1 << endl;
  }
  else
  {
    cout << "Sorry, the value you searched for is not present." << endl;
  }

  return 0;

}




