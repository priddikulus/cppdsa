#include<iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target);
int firstOcc (vector<int> &arr, int num);
int lastOcc (vector<int> &arr, int num);
pair<int,int> firstAndLastOcc(vector<int> &v, int num);
int peakIndexInMountainArray(vector<int>& arr);