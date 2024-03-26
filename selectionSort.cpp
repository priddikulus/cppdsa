#include "myHeader.h"
/*
Selection Sort sorts an array by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning.
Time Complexity: O(n^2) in the worst case.
*/
void selectionSort (vector<int> &a)
{
  int n = a.size(), p = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[i])
        swap(a[i], a[j]);
      p++;
    }
  }
  cout<<"Num passes: "<<p<<endl;
}