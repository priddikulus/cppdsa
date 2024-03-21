#include "myHeader.h"

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