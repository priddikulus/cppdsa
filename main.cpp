#include "myHeader.h"
//extern int binarySearch(int arr[], int size, int target);
int main() {
  int arr1[] = {2,4,5,6,8};
  cout<<"6 is at index " << binarySearch(arr1, 5, 6)<<endl;

  int arr2[] = {22,33,44,55,66,77,88,99};
  cout<<"55 is at index "<<binarySearch(arr2, 8, 55)<<endl;

  cout<<"67 is at index "<<binarySearch(arr2, 8, 67)<<endl;

  int arr3[] = {1,2,3,3,3,3,4,4,6,7};
  cout<<"First occ of 3 in arr3 is at index "<<firstOcc(arr3, 10, 3)<<endl;
  cout<<"Last occ of 3 in arr3 is at index "<<lastOcc(arr3, 10, 3)<<endl;
  cout<<"First occ of 9 in arr3 is at index "<<firstOcc(arr3, 10, 9)<<endl;
  cout<<"Last occ of 9 in arr3 is at index "<<lastOcc(arr3, 10, 9)<<endl;
  
}