// int arr[]={23,1,34,4,5};
// print this arr 5 times
 #include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
    for(int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}

// ________________________________________________________________________________
// print arr like this
// 23 1 34 4 5 
// 23 1 34 4 
// 23 1 34 
// 23 1 
// 23 

#include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
    }
// ************************************************************
 
// 23 1 34 4 5 
// 1 34 4 5 
// 34 4 5 
// 4 5 
// 5 

#include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
   for(int i=0; i<5; i++)
   {
       for( int j=i ; j<5; j++)
       {
           cout<<arr[j]<<" ";
       }
       cout<<endl;
   }
    
    }

// __________________________________________________________________________________________
// print arr in reverse order
// 5 4 34 1 23 
// 5 4 34 1 23 
// 5 4 34 1 23 
// 5 4 34 1 23
// 5 4 34 1 23

#include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
   for(int i=0; i<5; i++)
   {
       for(int j=4; j>=0; j--)
       {
           cout<<arr[j]<<" ";
       }
       cout<<endl;
   }
    
}


// 5 4 34 1 23 
// 4 34 1 23 
// 34 1 23 
// 1 23 
// 23 

// _____________________________________________________________________
#include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
    for(int i=0; i<5; i++)
    {
        for(int j=4-i; j>=0; j--)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}

// _________________________________________
// 23 1 34 4 5 
// 23 1 34 4 
// 23 1 34 
// 23 1 
// 23 

#include<iostream>
using namespace std;

int main() {
    int arr[]={23,1,34,4,5};
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5-i; j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    
}
