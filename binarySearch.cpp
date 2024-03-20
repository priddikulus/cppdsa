#include "myHeader.h"

void binSearchExamples()
{
  int arr1[] = {2,4,5,6,8};
  cout<<"6 is at index " << binarySearch(arr1, 5, 6)<<endl;

  int arr2[] = {22,33,44,55,66,77,88,99};
  cout<<"55 is at index "<<binarySearch(arr2, 8, 55)<<endl;

  cout<<"67 is at index "<<binarySearch(arr2, 8, 67)<<endl;
  cout<<endl;

  vector<int> arr3 = {5,7,7,8,8,10};

  auto p = firstAndLastOcc(arr3, 8);
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

  cout<<endl;

  int arr7[] = {77,88,99,22,33,44,55,66,70};
  cout<<"Index of pivot in arr7 is "<<getPivot(arr7, 9)<<endl;

}

int binarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2; //(end + start)/2;

  while (start <= end) { //target found
    if (arr[mid] == target) {
      return mid;
    } else if (target < arr[mid]) { //target to be searched in left sub array, change end
      end = mid - 1;
    }else if (target > arr[mid]) {// search in right subarray
      start = mid + 1;
    }
    mid = start + (end - start)/2; // (start + end)/2;
  }
  return -1; //target not found
}

//Find fisrt and last occurence of an element in a given array
//34. Find First and Last Position of Element in Sorted Array

int firstOcc (vector<int> &arr, int num)
{
  int n = arr.size();
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while (start < end) {
    if (arr[mid] == num) {
      ans = mid;
      end = mid - 1;
    } else if (num < arr[mid]) { //Left
      end = mid - 1;
      
    } else if (num > arr[mid]){ //Right
      start = mid + 1;
    }
    mid = start + (end - start)/2;
  }

  return ans;
}

int lastOcc (vector<int> &arr, int num)
{
  int n = arr.size();
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while (start < end) {
    if (arr[mid] == num) {
      ans = mid;
      start = mid + 1;
    } else if (num < arr[mid]) { //Left
      end = mid - 1;

    } else if (num > arr[mid]){ //Right
      start = mid + 1;
    }
    mid = start + (end - start)/2;
  }

  return ans;
}

pair<int,int> firstAndLastOcc(vector<int> &v, int num)
{
  pair<int, int> p;
  p.first = firstOcc (v, num);
  p.second = lastOcc (v, num);

  return p;
}


//Leetcode 852. Peak Index in a Mountain Array

int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    while (s < e) {
        if (arr[mid] < arr[mid +1]) {
            s = mid + 1;
        } else if (arr[mid] > arr[mid + 1]) {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int getPivot(int arr[], int n)
{
  int s = 0;
  int e = n - 1;
  int mid = s + (e-s)/2;

  while (s < e) {
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = s + (e-s)/2;
  }
  return s;
  
}

//33. Search in Rotated Sorted Array

