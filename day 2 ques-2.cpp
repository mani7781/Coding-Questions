#include<iostream>
using namespace std;

void shuffle(int arr1[],string arr2[],int n)
{
	int i;
	string res[n];
	for(i=0;i<n;i++)
	{
		res[i]=arr2[arr1[i]];
	}
	for(i=0;i<n;i++)
	{
		cout << res[i] << "";
	}
}
int main()
{
	string arr2[20];
	int arr1[20],n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> arr2[i];
	}
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	shuffle(arr1,arr2,n);
	return 0;
}

