#include<iostream>
using namespace std;

int richest(int acc[][20],int r,int c)
{
	int max=0,cust=0;
	for(int i=0;i<r;i++)
	{
		int sum=0;
		for(int j=0;j<c;j++)
		{
			sum+=acc[i][j];
		}
		if(max<sum)
		{
			max=sum;
			cust=i+1;
		}
	}
	return cust;
}


int main()
{
    int acc[20][20];
    int row,col,i,j;
    cin >> row;
    cin >> col;
    for(i=0;i<=row-1;i++)
    {
    	for(j=0;j<=col-1;j++)
    	{
    		cin >> acc[i][j];
		}
	}

    int cust = richest(acc,row,col);
 
    cout << cust;
 
    return 0;
}

