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

int firstOcc (int arr[], int size, int num)
{
  int start = 0;
  int end = size - 1;
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

int lastOcc (int arr[], int size, int num)
{
  int start = 0;
  int end = size - 1;
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
