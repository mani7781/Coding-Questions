#include<algorithm> 
#include<iostream>
#include<string>
using namespace std;

string lcp (string cpl, string cpr)
{ 
	int m= min(cpl.length(),cpr.length());
	for(int i=0;i<m;i++)
	{
		if(cpl[i]!=cpr[i])
		{
			return cpl.substr(0,i);
		} 
	}
	return cpl.substr(0,m);
}

string solve( string s[],int l,int r)
{
	if(l==r)
	{
	 	return s[l];
	}
	else
	{
		int m= (l+r)/2;
		string cpl = solve(s,l,m);
		string cpr = solve(s,m+1,r);
		return lcp(lcpl,lcpr);
	}
}


int main()
{
	string s[100];
	int i,n;
	cout << "Enter size: ";
	cin>>n;
	cout << "Enter String: ";
	for(i=0;i<n;i++)
	{ 
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		string p= s[i];
		reverse(p.begin(),p.end());
		s[i] = p;
	}
	
	string com = solve(s,0,n-1); 
	reverse(com.begin(), com.end());
	cout << "Common suffix is: " << com;
	return 0;
}
