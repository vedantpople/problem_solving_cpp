#include<iostream>  
#include<string>
using namespace std;  
int main()  
{
	int n,k;
	cin>>n>>k;
	int a[n], count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] >= a[k] && a[i] > 0)
		count++;
	}
	cout<< count;
	
	
return 0;
}

