#include "myHeader.h"

void printVec(vector<int>& v)
{
  cout<<endl;
  for(int n : v) {
    cout<<" "<<n;
  }
  cout<<endl;
}

int main() {
  binSearchExamples();
  cout<<endl;
  sortExamples();
  arrayExamples();
  linkedListOps();
}

void arrayExamples()
{
  vector<int> v = {11,7,3,12,4,21};
  vector<int> v1(v);
  cout<<endl;
  cout<<"reversed array : ";
  reverseArray(v1);
  printVec(v1);

  vector<int> v2(v);
  int n = 1;
  cout<<"Reversed array post index "<<n<<" : ";
  revArrPostIndex(v2, n);
   printVec(v2);
}

void sortExamples()
{
  vector<int> v = {23,43,12,21,56,21,77,56};
  
  vector<int> v1(v);
  cout<<"Array sorted using Selection sort :";
  selectionSort(v1);
  printVec(v1);
  
  vector<int> v2(v);
  cout<<endl;
  cout<<"Array sorted using Bubble sort :";
  bubbleSort(v2);
  printVec(v2);

  cout<<endl;
  vector<int> v3(v);
  cout<<endl;
  cout<<"Array sorted using Insertion sort :";
  insertionSort(v3);
  printVec(v3);
  

  vector<int> v4(v);
  cout<<endl;
  cout<<"Array sorted using Merge sort :";
  mergeSort(v4, 0, v4.size()-1);
  printVec(v4);
}



