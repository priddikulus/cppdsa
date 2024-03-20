#include "myHeader.h"

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
            s = mid +1;
        } else if (arr[mid] > arr[mid + 1]) {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
