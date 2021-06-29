#include<iostream>
using namespace std;
 
int removeDupKey(int num[], int n)
{
	int key,i,j,k=0;
	cout << "Enter the key element :";
	cin >> key;
    if (n==0 || n==1)
        return n;
 	for(i=n-1;i>=0;i--)
 	{
 		if(num[i]!=key)
 		{
 			j=i;
 			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(num[i]==key){
			num[i]=num[j];
			j--;
			k++;
		}
	}
    
    return k;
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

    int k = removeDupKey(num, n);
 
 	cout << "The new array is :";
    for (int i=0; i<n-k; i++)
        cout << num[i] << " ";
 
    return 0;
}
