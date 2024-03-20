#include "myHeader.h"

int main() {
  int arr1[] = {2,4,5,6,8};
  cout<<"6 is at index " << binarySearch(arr1, 5, 6)<<endl;

  int arr2[] = {22,33,44,55,66,77,88,99};
  cout<<"55 is at index "<<binarySearch(arr2, 8, 55)<<endl;

  cout<<"67 is at index "<<binarySearch(arr2, 8, 67)<<endl;
  cout<<endl;

  vector<int> arr3 = {1,2,3,3,3,3,4,4,6,7};

  auto p = firstAndLastOcc(arr3, 3);
  cout<<"Occ of 3: First "<<p.first<<" Last "<<p.second<<endl; 
  cout<<"3 occurs "<<p.second - p.first + 1<<" times in the array"<<endl;
  cout<<endl;

  p = firstAndLastOcc(arr3, 9);
  cout<<"Occ of 9: First "<<p.first<<" Last "<<p.second<<endl;

  cout<<endl;
  vector<int> arr4 = {10,5,2};
  vector<int> arr5 = {0,2,3,1,0};
  vector<int> arr6 = {0,1,4,7,5,0};

  cout<<"index of peak element in arr4 "<<peakIndexInMountainArray(arr4)<<endl;
  cout<<"index of peak element in arr5 "<<peakIndexInMountainArray(arr5)<<endl;
  cout<<"index of peak element in arr6 "<<peakIndexInMountainArray(arr6)<<endl;
}