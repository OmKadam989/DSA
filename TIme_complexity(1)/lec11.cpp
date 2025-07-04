#include<iostream>
using namespace std;

const int count = 5; // global constant

void fun(int a[][count], int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
}

int main() {
    int m = 4, n = 5;
    int arr[m][count]; // note: second dimension must match 'count'

    fun(arr, m, n);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

#include<iostream>
using namespace std;
int main () {
    int m=3;
    int n=3;
    
    int **p = new int *[m];
    for(int i=0; i<m; i++)
    {
        p[i] = new int[5];
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>> p[i][j];
        }
    }
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}

// *****************************************Recursion*****************************************
// Factorial of a number using recursion

##include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    return 1;
    
    return n*(n-1);
}

int main() {
    int n=3;
    cout<<fact(n);
    
}

#include<iostream>
using namespace std;

// Power of 3 using recursion
int pow3(int n)
{
    if(n==1)
    return 3;
    
    return 3*pow3(n-1);
}

int main() {
    int n=3;
   cout<< pow3(n);
    
}

// Fibonacci series using recursion

#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n=4;
    cout<<fib(n);
}

