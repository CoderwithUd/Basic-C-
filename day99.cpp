#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int li,ri;
		int i=0;
		while(i<m){
		cin>>li[i]>>ri[i];
		i++}
		int count=0;
		for(int i=0;i<m;i++)
		{
			int sum=li[i]+ri[i];
			if(sum>=n)
			{
				count+=i;
			}
			else{
				cout<<"-1"<<endl;
			}

		}
		cout<<count<<endl;
	}
	return 0;
}