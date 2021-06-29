#include<iostream>
using namespace std;
 
int removeDup(int num[], int n)
{
    if (n==0 || n==1)
        return n;
 
    int j = 0;

    for (int i=0; i < n-1; i++)
        if (num[i] != num[i+1])
            num[j++] = num[i];
 
    num[j++] = num[n-1];
 
    return j;
}
 
int main()
{
    int num[20];
    int n;
    cout << "enter size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(int i=0;i<=n-1;i++)
    {
    	cin >> num[i];
	}

    n = removeDup(num, n);
 
 	cout << "The new array is :";
    for (int i=0; i<n; i++)
        cout << num[i] << " ";
 
    return 0;
}
