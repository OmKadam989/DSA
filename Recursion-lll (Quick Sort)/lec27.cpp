class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low>=high) return;
        int index = partition(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        
        // code here
        int first=low, second=low;
        {
            while(second<=high)
            {
            if(arr[second] <=arr[high])
            {
                swap(arr[first], arr[second]);
                first++,second++;
            }
            else
            second++;
            }
        }
        return first-1;
    }
};
#include<iostream>
using namespace std;
bool sum_pos(int a[], int size, int sum, int total , int index=0)
{
    if(size == index)
    {
        if(sum == total)
    return 1;
    else
    return 0;
    }
    
    
    return sum_pos(a,size,sum,total,index+1) || sum_pos(a,size,sum,total+a[index], index+1);
}
int main() {
    int arr[]={34,23,4,5,23};
    int size= sizeof(arr) / sizeof(arr[0]);
    int total=0, sum=9;
    
    cout<<sum_pos(arr,size,sum,total);
}