#include<iostream>
using namespace std;

void func(int arr[],int n)
{
	int i,j,freq,val;
	for(i=0;i<n-1;i=i+2)
	{
		freq=arr[i];
		val=arr[i+1];
	    for(j=0;j<freq;j++)
		{
			cout << val <<"";
		}
	}
}
int main()
{
	int arr[20],n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	func(arr,n);
	return 0;
}
