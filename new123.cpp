#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
int main()
{
	int a[]={1, 2, 3, 4, 4};
	map<int,int>mp;
	sort(a,a+5);
	for(int i=0;i<5;i++)
	{
		if(a[i]==a[i+1])
		{
			cout<<a[i]<<endl;
			return 0;
		}
	}
	return 0;
}