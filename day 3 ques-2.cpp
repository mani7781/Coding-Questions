#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr1[i]>arr2[j])
		{
			j++;
		}
		else if(arr1[i]<arr2[j])
		{
			i++;
		}
		else
		{
			cout << arr1[i] << " ";
			i++;
			j++; 
		}
	}
}


int main()
{
    int arr1[20],arr2[20];
    int n,m,i;
    cin >> n;
    cin >> m;
    for(i=0;i<=n-1;i++)
    {
    	cin >> arr1[i];
	}
	for(i=0;i<=m-1;i++)
    {
    	cin >> arr2[i];
	}

    intersection(arr1,arr2,n,m);
 
    return 0;
}

