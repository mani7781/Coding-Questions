#include<iostream>
using namespace std;

void toffee(int num[],int n)
{
	bool res[n];
	int max=num[0],i,extra;
	cin >> extra; 
	for(i=0;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if((num[i]+extra)>=max)
		{
			res[i]=true;
		}
		else
		{
			res[i]=false;
		}
	}
	for(i=0;i<n;i++)
	{
		cout << res[i];
	}
}

int main()
{
    int num[20];
    int n,i;
    cin >> n;
    for(i=0;i<=n-1;i++)
    {
    	cin >> num[i];
	}

	toffee(num,n); 
    return 0;
}

