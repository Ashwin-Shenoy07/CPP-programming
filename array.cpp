#include <iostream>
using namespace std;
int main() {
   int arr[5],i;
   cout<<"Enter elements: ";
   for(i=0;i<5;i++)
   cin>>arr[i];
   int *ptr = &arr[0];
   cout<<"You entered: ";
   for(i = 0; i < 5; i++) {
      cout<< *ptr <<"\n ";
      ptr++;
   }
   return 0;
}