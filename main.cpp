#include "myHeader.h"
//extern int binarySearch(int arr[], int size, int target);
int main() {
  int arr1[] = {2,4,5,6,8};
  cout<<"6 is at index " << binarySearch(arr1, 5, 6)<<endl;

  int arr2[] = {22,33,44,55,66,77,88,99};
  cout<<"55 is at index "<<binarySearch(arr2, 8, 55)<<endl;

  cout<<"67 is at index "<<binarySearch(arr2, 8, 67)<<endl;
}