/*#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count=0;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(arr[i][j]==1)
				count+=1;
			}
			else if(arr[i][j]=1)
			{
				count+=1;
			}
		}
	}
	cout<<count/2<<endl;
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
const int maxw=2005;

int main()
{
	int n;
	cin>>n;
	string a[n];
	bitset<maxw>b,q[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		for(int j=0;j<n;j++)
        {
			a[i][j]=a[i][j]-'0';
		}
		q[i][i]=0;
	}
	int rev=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			b=q[i]&q[j];
			if(a[i][j]==0 && b.count()>=1)
			{
				rev+=2;
			}
		}
	}
	cout<<rev<<endl;

}