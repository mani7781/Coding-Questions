#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string LongestPrefix(string m[],int n)
{
	int s;
	string Lp=" ";
	sort(m,m+n);
	s=min(m[0].size(),m[n-1].size());
	for(int i=0;i<s;i++)
	{
		if(m[0][i]==m[n-1][i])
		{
			Lp=Lp+m[0][i];
		}
	}
	return Lp;
}

int main()
{
	string m[100];
	int i,n;
	cout << "Enter the size: ";
	cin >> n;
	cout << "Enter string: ";
	for(i=0;i<n;i++)
	{
		cin >> m[i];
	}
	
	string com=LongestPrefix(m,n);
	cout << "Common prefix is: " << com;
	return 0;
}
