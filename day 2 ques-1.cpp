#include<iostream>
using namespace std;

void small(int arr[],int n)
{
	int i,j,res[n];
	for(i=0;i<n;i++)
	{
		int c=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				c++;
				res[i]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout << res[i];
	}
}
	
int main()
{
	int i,n;
	int arr[20],res[20];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	small(arr,n);
	
	return 0;
}
