#include<iostream>
using namespace std;

int findNegative(int grid[][100],int m,int n)
{
	int count=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(grid[i][j]<0)
			{
				count++;
			}
		}
	}
	return count;
}

int main()
{
	int grid[100][100],n,m,i,j;
	cout << "Enter row and column: ";
	cin >> m >> n;
	cout << "Enter elements: ";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> grid[i][j];
		}
	}
	int c=findNegative(grid,m,n);
	cout << "The number of negative numbers are : " << c;
	return 0;
}
