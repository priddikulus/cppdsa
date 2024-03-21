#include "myHeader.h"

void selectSortExamples()
{
  vector<int> v = {23,43,12,21,56};
  selectionSort(v);
  cout<<"Sorted array is :";
  for(int n : v) {
    cout<<" "<<n;
  }
    cout<<endl;
}

void selectionSort (vector<int> &a)
{
  int n = a.size();
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      if (a[j] < a[i])
        swap(a[i], a[j]);
    }
  }
}