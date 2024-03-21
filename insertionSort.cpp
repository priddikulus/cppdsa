#include "myHeader.h"

void insertionSort(vector<int> &a) {
  int n = a.size(), p = 0;
  for (int i = 1; i < n; i++) {
    int tmp = a[i];
    int j = i - 1;

    while (j >= 0) {
      p++;
      if (a[j] > tmp) {
        // shift right
        a[j + 1] = a[j];
      } else {
        break;
      }
      j--;
    }
    a[j + 1] = tmp;
  }
  cout << "Num passes: " << p << endl;
}