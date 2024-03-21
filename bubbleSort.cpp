#include "myHeader.h"

void bubbleSort(vector<int> &a)
{
  int n = a.size(), p = 0;
  for (int i = 0; i < n; i++) {
    bool swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] == a[j+1]) {
        continue;
      }
       p++;
      if (a[j] > a[j+1]) {
        swap(a[j], a[j+1]);
        swapped = true;
      }
    }
    if(!swapped)
      break;
  }
  cout<<"Num passes: "<<p<<endl;
}

void bubbleSort1(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        // Flag to check if any swaps occurred in this pass
        bool swapped = false;

        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // If two adjacent elements are equal, skip swapping
            if (arr[j] == arr[j + 1]) {
                continue;
            }

            // Swap if the element is greater than the next one
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped in this pass, the array is sorted
        if (!swapped) {
            break;
        }
    }
}