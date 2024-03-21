#include<iostream>
#include <vector>
using namespace std;

//defined in binarySearch.cpp
void binSearchExamples();
int binarySearch(int arr[], int size, int target);
int firstOcc (vector<int> &arr, int num);
int lastOcc (vector<int> &arr, int num);
pair<int,int> firstAndLastOcc(vector<int> &v, int num);
int peakIndexInMountainArray(vector<int>& arr);
int getPivot(int arr[], int n);
long long sqrtInteger (int n);

void sortExamples();

//Selection Sort
void selectionSort (vector<int> &a);

//Bubble Sort
void bubbleSort(vector<int> &a);

//Insertion sort
void insertionSort(vector<int> &a);

//Merge Sort
void mergeSort(vector<int>&v, int s, int e);

//Arrays
void reverseArray(vector<int> &v);
void revArrPostIndex(vector<int> &v, int k);