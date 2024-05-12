#include<iostream>
#include<bits/stdc++.h>
//#define int long long
using namespace std;
int per(int n)
{
	int ans=n,i;
	for(i=1;i<n-1;i++)
	{
		ans*=(n-1);
	}
	return ans;
}
int count(int arr,int n)
{
	int count_n=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(arr[j]<arr[i])
			{
				int x;
				x=arr[j];
				arr[j]=arr[i];
				arr[i]=x;
				count_n+=1;
			}
		}
	}
	return count_n;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}	
		int b=per(n);	
		do{
			int i=count(arr[],n);
			if(i<=2)
			{
				cout<<(next_permutation(arr,arr+n));
			}
		}while(b--);
		
	}
	return 0;

}