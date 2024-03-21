#include "myHeader.h"

void reverseArray(vector<int> &v)
{
  int n = v.size(), s = 0, e = n-1;
  while (s <= e) {
    swap(v[s], v[e]);
    s = s+1;
    e = e - 1;
  }
}


void revArrPostIndex(vector<int> &v, int k)
{
  int n = v.size(), s = k+1, e = n-1;
  while (s <= e) {
    swap(v[s], v[e]);
    s = s+1;
    e = e - 1;
  }
}