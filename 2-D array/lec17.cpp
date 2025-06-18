// declairng and taking input
#include<iostream>
using namespace std;
int main () {
    int arr[6][6];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
}

// printing the 2D array

#include<iostream>
using namespace std;
int main () {
    int arr[6][6];
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<arr[i][j];
        }
    }
}

// to find the target in 2D array
#include<iostream>
using namespace std;
int main() {
    int arr[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr)/sizeof(arr[0]);
    int tar=7;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] == tar)
            {
                cout<< i<<" "<< j<<" ";
            }
        }
    }
}

// sum of the 2D array
#include<iostream>
using namespace std;
int main() {
    int arr[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            
               sum += arr[i][j];
            
        }
    }
    cout<<sum;
}

// sum of the each row of the 2D array
#include<iostream>
using namespace std;
int main() {
    int arr[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            sum += arr[i][j];
        }
            cout<<sum;
            cout<<endl;
    }
}

// sum of the each column of the 2D array
#include<iostream>
using namespace std;
int main() {
    int arr[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr)/sizeof(arr[0]);

    for(int j=0; j<n; j++)
    {
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum += arr[i][j];
        }
            cout<<sum;
            cout<<endl;
    }
}

// maximum element in the 2D array
#include<iostream>
using namespace std;
int main() {
    int arr[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max = arr[0][0];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j] > max){
                max = arr[i] [j];
            }
        }
    }
    cout<<max;
}

// minimum element in the 2D array
#include<iostream>
using namespace std;
int main () {
    
    int arr[4][3]={{2,3,4},{5,6,7},{1,2,3},{7,8,9}};
    int min = arr[0][0];
   int row= sizeof(arr) / sizeof(arr[0]);
   int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    
    for(int i=0; i<row; i++)
    {
        for(int j=0;j<col; j++)
        {
            if(arr[i][j] <min)
            {
                min
                = arr[i][j];
            }
        }
    }
    cout<<min;
}


// minimum element in each row of the 2D array
#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<3; i++)
    {
        int min =arr[0][0];
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] <min)
            min = arr[i][j];
        }
        cout<<min;
        cout<<endl;
    }
}


// maximum element in each row of the 2D array
#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},{4,5,6},{7,8,9}};

    for(int i=0; i<3; i++)
    {
        int min = 0;
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] >min)
            min = arr[i][j];
        }
        cout<<min;
        cout<<endl;
    }
}

// min from each col of the 2D array
#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},{4,5,6},{7,8,9}};

    for(int j=0; j<3; j++)
    {
        int min = arr[0][0];
        for(int i=0; i<3; i++)
        {
            if(arr[i][j] < min)
            min = arr[i][j];
        }
        cout<<min;
        cout<<endl;
    }
}

// max from each col of the 2D array
#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},{4,5,6},{7,8,9}};

    for(int j=0; j<3; j++)
    {
        int min = 0;
        for(int i=0; i<3; i++)
        {
            if(arr[i][j] > min)
            min = arr[i][j];
        }
        cout<<min;
        cout<<endl;
    }
}

// transpose of the 2D array
#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},
    {4,5,6},
    {7,8,9}};

    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int j=0; j<3; j++)
    {
        for(int i=0; i<3; i++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}


#include<iostream>
using namespace std;
int main() {
    
    int arr[3][3] ={{10,2,3},
    {4,5,6},
    {7,8,9}};

    for(int i=0; i<3/2; i++){
        for(int j=0; j<3; j++)
        {
            swap(arr[i][j],arr[j][3-i-1]);
        }
    }

        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
    {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}