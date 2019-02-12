#include <iostream>
#include <algorithm>
using namespace std;
 void reversenumber (int arr[], int size){
   int temp=0;
      for (int i=0; i<size/2; i++)
      {
        temp = arr[i];
        arr[i]= arr[size - 1- i];
        arr[size - 1 -i] = temp;
        }
return;
}
int main() {
     int a[]= {1,2,3,4};
     int number = sizeof(a)/sizeof(int);
     reversenumber (a,number);
     for (int i=0;i< number; i++)
     cout<< a[i]<< endl;
     return 0;
   }
