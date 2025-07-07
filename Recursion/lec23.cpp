#include<iostream>
using namespace std;
void print(int n)
{
    if(n==1){
    cout<<n<<" ";
    return ;
    }
    
    print(n-1);
    cout<<n<<" ";
}
int main() {
    int n=5;
    print(n);
}
// print the sum of arr
#include<iostream>
using namespace std;
int recursiveSum(int *a, int size)
{
    if(size==0)
    return 0;
    return a[0] + recursiveSum(a+1,size-1);
}
int main() {
    int arr[]={23,1,23,4,44};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    cout<<"sum is: "<<recursiveSum(arr,size);
}

// sum of each element
#include<iostream>
using namespace std;

void recursiveS(int a[], int size, int sum=0)
{
    if(size == 0)
    return;
    
    sum += a[0];
    cout<<sum<<endl;
    recursiveS(a+1,size-1,sum);
}
int main () {
    int arr[]={23,2,34,21,2};
    int size= sizeof(arr) / sizeof(arr[0]);
    
    recursiveS(arr,size);
}

// linear Search

#include<iostream>
using namespace std;

bool linear(int *a, int size, int key, int index=0)
{
    if(size == 0){
       cout<<"Not found";
       return false;
    }
    
    if(a[0] == key)
    {
    cout<<index;
    return true;
    }
    

    return linear(a+1, size-1, key, index++);
    
}

int main() {
    int arr[]={23,4,32,45,54};
    int size= sizeof(arr) / sizeof(arr[0]);
    int key;
    cin>>key;
    
    linear(arr,size,key);
}

// double the value

#include<iostream>
using namespace std;

void double_element(int a[], int size)
{
    if(size ==0)
     return;
    
    a[0] = a[0] *2;
    
     double_element((a+1), size-1);
}
int main() {
    int arr[]= {23,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double_element(arr, size);
    
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// binary search

#include<iostream>
using namespace std;

void binarySearch(int a[], int size, int key, int low,int high)
{

    if(low == high)
    {
        cout<<"Not found";
        return;
    }
    int mid = (low + high ) /2;
    if(a[mid] == key)
    cout<<mid;
    
    else if(a[mid] > key)
    {
        binarySearch(a,size,key,low,mid-1);
    }
    else
    binarySearch(a,size,key,mid+1,high);
}

int main() {
    int arr[] ={2,4,5,6,8};
    int size=sizeof(arr) / sizeof(arr[0]);
    int key;
    cout<<"Enter the no. you have to find: ";
    cin>>key;
    
    binarySearch(arr,size,key,0,size-1);
}