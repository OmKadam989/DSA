// Robber House
#include<iostream>
using namespace std;
void robber(int a[], int &sum,int total, int size, int index)
{
	if(size <= index) {
		sum = max(sum, total);
		return;
	}

	robber(a, sum,total, size, index+1);
	robber(a, sum,total + a[index], size, index+2);
}
int main() {
	int arr[]= {2,34,5,66,64};
	int size = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	int total=0;
	robber(arr, sum,total, size, 0);
	cout<<sum;
}
