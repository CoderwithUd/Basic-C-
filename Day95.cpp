#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool isPowerof2(ll n)
{
	return (ceil(log2(n))==floor(log2(n)));
}
long long binpow(long long a,long long b)
{
	long long rem=1;
	while(b>0)
	{
		if(b&1)
		rem=rem*a;
		a=a*a;
		b>>1;
	}
	return rem;
}
int main()
{
	int t;;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		if(isPowerof2(n)==true) cout<<"0\n";
		else
		{
			int count =0;
			ll temp=n;
			while (isPowerof2(temp)==false)
			{
				/* code */
				count+=1;
				temp=temp-binpow(2,log2(temp));
			}
			cout<<count<<endl;
			
		}
	}
	return 0;
}