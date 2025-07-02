#include<iostream>
using namespace std;
int main() {
    int i=20;
    int *j= &i;
    cout<<i<<" "<<*j;
}
#include<iostream>
using namespace std;
void vo(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        a[i]= a[i] * 2;
    }
}
int main() {
    int arr[] ={ 12,2,3,4,1};
    vo(arr,6);
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<arr[i];
}
#include<iostream>
using namespace std;
void fun(int *a, int size)
{
    for(int i=0; i<size; i++)
    {
        *a = (*a) * 2;
        cout<<*a<<endl;
        a++;
        
    }
}
int main() {
    
    int arr[] {23,43,34,433};
    fun(arr,4);
    
}
#include<iostream>
using namespace std;
void fun(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        *a = (*a) * 2;
        cout<<a<<endl;
        *a++;
        
    }
}
int main() {
    
    int arr[] {23,43,34,433};
    fun(arr,4);
    
}
#include<iostream>
using namespace std;
void fun(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        *a = (*a) * 2;
        cout<<*a<<endl;
        *a++;
        
    }
}
int main() {
    
    int arr[] {23,43,34,433};
    fun(arr,4);
    
}
#include<iostream>
using namespace std;
void swap( int &c, int &d)
{
    int ten= c;
    c=d;
    d= ten;
}
int main() {
    
    int a=5, b=8;
    swap(a,b);
    cout<<a<<" "<<b;
}
#include<iostream>
using namespace std;
 int main() {
     int arr[3][3]={{0,2,3},{2,3,4},{1,2,3}};
     cout<<arr<<endl;
     cout<<&arr<<endl;
     cout<<arr[0]<<endl;
 }
 #include<iostream>
using namespace std;
 int main() {
     int arr[3][3]={{0,2,3},{2,3,4},{1,2,3}};
     cout<<arr<<endl;
     cout<<&arr<<endl;
     cout<<arr[0]<<endl;
     cout<<**(arr+1);
 }
 #include<iostream>
using namespace std;
 int main() {
     int arr[3][3]={{0,2,3},{2,3,4},{1,2,3}};
     cout<<arr<<endl;
     cout<<&arr<<endl;
     cout<<arr[0]<<endl;
     cout<< *(*(arr+2) + 2);
 }
 #include<iostream>
using namespace std;

void fun(int *a, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << *(a + i * col + j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int row = 3, col = 4;
    int arr[3][4] = {
        {23, 43, 21, 3},
        {34, 2, 3, 4},
        {3, 4, 22, 34}
    };

    fun(&arr[0][0], row, col);  // Pass as 1D
    return 0;
}
 #include<iostream>
using namespace std;
int main() {
    int num;
    int *p= new int;
    int *x = new int;
    cout<<*p<<endl;
    cout<<*x;
}
#include<iostream>
using namespace std;
int main() {
    int num;
    int *p= new int;
    int *x = new int;
    cout<<p<<endl;
    cout<<x;
}