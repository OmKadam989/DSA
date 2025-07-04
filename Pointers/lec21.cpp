//   #include<iostream>
//   using namespace std;
//   int main () {
//       int *p;
//       int num=10;
//       p = & num;
//       cout<<*p;
//   } 
//     #include<iostream>
//   using namespace std;
//   int main () {
//       int *p;
//       int num=10;
//       p = & num;
//       cout<<*p<<endl;;
//       *p=20;
//       cout<<num;
//   }
//     #include<iostream>
//   using namespace std;
//   int main () {
//      int arr[]={10,203,34,23};
//      int *p;
     
//      p= arr;
//      cout<<arr<<endl;;
//     cout<<*p<<endl;
//     cout<<p;
     
     
//   }
//     #include<iostream>
//   using namespace std;
//   int main () {
//      int arr[]={10,203,34,23};
//      int *p;
     
//      p= arr;
//      int **x= &p;
//      int ***y= &x;
//      cout<<*arr<<endl;;
//      cout<<&arr<<endl;
//      cout<<arr[0]<<endl;;
//     cout<<*p<<endl;
//     cout<<x<<endl;
//     cout<<y<<endl;
//     cout<<p;
     
     
//   }
//     #include<iostream>
//   using namespace std;
//   int main () {
//      int arr[]={10,203,34,23};
//      int *p;
     
//     p= arr;
//     for(int i=0; i<4;i++)
//     {
//         cout<<*p<<endl;
//         p++;
        
//     }
     
     
//   }
//     #include<iostream>
//   using namespace std;
//   int main () {
//      int arr[]={10,203,34,23};
//      int *p;
     
//     p= arr;
//     for(int i=0; i<4;i++)
//     {
//         cout<<*p<<endl;
//         p++;
        
//     }
//     for(int i=0; i<4; i++)
//     {
//         cout<<arr;
//         arr++;
//     }
     
     
//   }
//   #include<iostream>
// using namespace std;

// void fun(int *c, int *d)
// {
//     *c= *c * 2;
//     *d= *d + 2;
// }
// int main() {
//     int a=5, b=8;
//     fun(&a,&b);
//     cout<<a<<" "<<b;
// }
// #include<iostream>
// using namespace std;

// void fun(int &c, int &d)
// {
//     c= c+2;
//     d= d*2;
// }
// int main() {
//     int a= 8, b=10;
//     fun(a,b);
//     cout<<a<<" "<<b;
// }
// #include<iostream>
// using namespace std;

// void fun(int c, int d)
// {
//     c= c*2;
//     d= d%3;
//     cout<<c<<" "<<d<<endl;
// }
// int main() {
//     int a=5, b=8;
//     fun(a,b);
//     cout<<a<<" "<<b;
// }