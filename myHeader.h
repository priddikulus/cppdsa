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

//Selection Sort
void selectSortExamples();
void selectionSort (vector<int> &a);