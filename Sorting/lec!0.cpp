// 0 0 1 1 1 1 2 2

#include<iostream>
using namespace std;

int main() {
    
    int arr[]={0,1,2,1,1,2,1,0};
    int countZero=0, countOne=0, countTwo=0;
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i]==0)
        countZero++;
        
        else if(arr[i]==1)
        countOne++;
        
        else
        countTwo++;
    }
    // cout<<countOne<<endl;
    for(int i=0; i<countZero; i++)
    {
        arr[i]=0;
    }
    for(int i=countZero; i<countZero+countOne; i++)
    arr[i]=1;
    
    for(int i=countOne+countZero; i<countZero+countOne+countTwo; i++)
    arr[i]=2;
    
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i]<<" ";
    }
}

// selection sort

#include<iostream>
using namespace std;

int main()
{
    int arr[]={23,1,2,43,2,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++)
    {
        int index=i;
        
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                swap(arr[index],arr[j]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//////////////////////////bubble sort///////////////////

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
    }
};

//// insertion sort**********************

class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0; i<n-1; i++)
        {
            for(int j=i; j>=0; j--)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        
    }
};

// rotate the array by one

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int i,n=arr.size();
        int first= arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            swap(arr[i],arr[i+1]);
        }
        arr[0]=first;
    }
};

////////// find the fine/////////////////

class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        int pay=0;
        int n= car.size();
        if(date % 2 == 1)
        {
            for(int i=0; i<n; i++)
            {
               if( car[i] % 2 == 0)
               {
                   pay += fine[i];
               }
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                if( car[i]% 2 == 1)
                {
                    pay += fine[i];
                }
            }
        }
        
        return pay;
    }
};