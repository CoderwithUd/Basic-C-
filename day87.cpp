#include<bits/stdc++.h>
#define int long long

using namespace std;
int32_t main()
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
		int a=0;
		int ans=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i]<arr[a])
			{
				ans+=(i-a+1)*arr[a]-arr[i];
				a=i;
			}
		}
		if(a!=n-1)
		{
			ans+=(n-1-a+1)*arr[a]-arr[n-1];
		}
		if(ans>0)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<0<<endl;
		}

	}
	return 0;
}