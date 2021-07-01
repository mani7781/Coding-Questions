#include<iostream>
using namespace std;

void func(int arr[],int n,int f)
{
	int i,j;
	int res[n+1];
	res[0]=f;
	for(i=0;i<n;i++)
	{
		res[i+1]=res[i]^arr[i];
	}
	for(i=0;i<=n;i++)
	{
		cout << res[i];
	}
}
int main()
{
	int arr[20],n,f;
	cin >> n;
	cin >> f;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	func(arr,n,f);
	return 0;
}
