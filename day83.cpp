/*#include<iostream>
#include<algorithm>
using namespace std;
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
			//int arr={};
			cin>>arr[i];
		}
		int a[n];
		int p,sum=0;
		for(int i=0;i<n;i++)
		{
			a[i]=arr[i];
			if(i>(n/2))
			{
				p=i*a[i];
				sum=sum+p;
			}
			else{
				sum +=(max(p*(2*i),p*(2*i+1)));
			}
		}
	}
	return 0;
}*/

#include <bits/stdc++.h>

using namespace std;
#define q 1000000007
int main()
{
	long long int t, n, i, j;
	cin >> t;
	while (t--)
	{ 
		n = (1<<t) - 1;
		long long int a[n+1];
		double b[n+1];
		for (i=1; i<=n; i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		for (i=n/2;i>0;i--)
		{
			if (b[i*2+1]>b[i*2])
			{
				a[i] = a[i]*a[2*i+1];
				b[i] = b[1]*b[2*i+1];
			}
			else
			{
				a[i]=(a[i]*a[2*i]);
				b[i]=(b[i]*b[2*i]);
			}
			a[i]%=q;
		}
		cout<<a[1]<<endl;
		cin>>t;
	}
	return 0;
}/*
#include <bits/stdc++.h>
using namespace std;
#define q 1000000007
int main()
{
	long long int t, n, i, j;
	cin >> t;
	while (t != 0)
	{
		n = (1 << t) - 1;

		long long int a[n + 1];
		double b[n + 1];
		for (i = 1; i <= n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}

		for (i = n / 2; i > 0; i--)
		{
			if (b[2 * i + 1] > b[2 * i])
			{
				a[i] = a[i] * a[2 * i + 1];
				b[i] = b[i] * b[2 * i + 1];
			}
			else
			{
				a[i] = (a[i] * a[2 * i]);
				b[i] = (b[i] * b[2 * i]);
			}

			a[i] %= q;
		}
		cout << a[1] << endl;
		cin >> t;
	}
	return 0;
}*/