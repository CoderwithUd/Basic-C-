#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cout<<"Value of n:";
	cin>>n;
	cout<<"value which is find sum:";
	cin>>x;
	cout<<"Values of array:";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>ans;

	for(int j=0;j<n;j++)
	{
		int sum=a[j];
		int count=1;
		for(int i=j+1;i<n;i++)
		{
			sum+=a[i];
			count+=1;
			if(sum==x)
			{
				ans.push_back(count);
				break;
			}
			else{
				if(sum<x)
				{
					continue;
				}
				else{
					break;
				}
			}
		}
	
	}
		sort(ans.begin(),ans.end());
		cout<<ans[0]<<endl;

		return 0;
	}