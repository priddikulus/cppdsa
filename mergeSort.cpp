#include "myHeader.h"

void merge(vector<int> &v, int s, int mid, int e)
{
  int len1 = mid - s + 1;
  int len2 = e - mid;

  vector<int> first(len1);
  vector<int> second(len2);

  //copy values
  int mainArrayIndex = s;
  for(int i = 0; i < len1; i++) {
    first[i]  = v[mainArrayIndex + i];
  }

  mainArrayIndex = mid + 1;
  for(int i = 0; i < len2; i++) {
    second[i]  = v[mainArrayIndex + i];
  }
  //merge 2 arrays

  int index1 = 0;
  int index2 = 0;
  mainArrayIndex = s;

  while (index1 < len1 && index2 < len2) {
    if (first[index1] <= second[index2]) {
      v[mainArrayIndex++] = first[index1++];
    } else {
      v[mainArrayIndex++] = second[index2++];
    }
  }

  while(index1 < len1) {
    v[mainArrayIndex++] = first[index1++];
  }

  while(index2 < len2) {
    v[mainArrayIndex++] = second[index2++];
  }
  
}

void mergeSort(vector<int> &v, int s, int e)
{
  int mid = s + (e - s)/2;
  if ( s >= e) {
    return;
  }
  
  mergeSort(v, s, mid);

  mergeSort(v, mid+1, e);

  merge(v, s, mid, e);
  
}