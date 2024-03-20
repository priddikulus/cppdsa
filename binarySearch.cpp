#include "myHeader.h"

int binarySearch(int arr[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2; //(end + start)/2;

  while (start <= end) { //target found
    if (arr[mid] == target) return mid;

    if (target < arr[mid]) { //target to be searched in left sub array, change end
      end = mid - 1;
    }
    if (target > arr[mid]) {
      start = mid + 1;
    }
    mid = start + (end - start)/2; // (start + end)/2;
  }
  return -1; //target not found
}


