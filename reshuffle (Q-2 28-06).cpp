#include<iostream>
using namespace std;

void reshuffle( int num[],int n)
{
	int i=0,j=n/2;
	int res[n];
	for(int k=0;k<n;k=k+2)
	{
		if(j!=n)
		{
			res[k]=num[i];
			res[k+1]=num[j];
			i++;
			j++;
		}
	}
	for(i=0;i<n;i++){
		cout << res[i] << " ";
	}
}
int main()
{
	int num[20];
	int n;
	cout << "enter the size: ";
	cin >> n;
	cout << "Enter array elements: ";
    for(int i=0;i<=n-1;i++)
    {
    	cin >> num[i];
	}
    reshuffle(num,n);
    return 0;
}
