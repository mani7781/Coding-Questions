#include<bits/stdc++.h>
using namespace std;

void reverse(char s[] ,int n)
{
	int j=n-1,i=0;
	while (i<j)
	{
		if (!isalpha(s[i]))
		{
			i++;
		}	
		else if(!isalpha(s[i]))
		{
			j--;
		}	
		else
		{
			swap(s[i],s[j]);
			i++;
			j--;
		}
	}
}

int main()
{
	char s[100];
	int n;
	cout << "Enter size: ";
	cin >> n;
	cout << "Enter string: ";
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
	}
	reverse(s,n);
	cout << "Reverse string is : " << s ;
	return 0;
}

