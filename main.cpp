#include "myHeader.h"

int main() {
  binSearchExamples();
  cout<<endl;
  sortExamples();
}

void sortExamples()
{
  vector<int> v = {23,43,12,21,56,21,77,56};
  vector<int> v1(v);
  cout<<"Array sorted using Selection sort :";
  selectionSort(v1);
  for(int n : v1) {
    cout<<" "<<n;
  }
  cout<<endl;
  vector<int> v2(v);
  cout<<endl;
  cout<<"Array sorted using Bubble sort :";
  bubbleSort(v2);
  for(int n : v2) {
    cout<<" "<<n;
  }

  cout<<endl;
  vector<int> v3(v);
  cout<<endl;
  cout<<"Array sorted using Insertion sort :";
  insertionSort(v3);
  for(int n : v3) {
    cout<<" "<<n;
  }
}



