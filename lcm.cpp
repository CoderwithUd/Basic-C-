#include<iostream>
using namespace std;
int main()
{
	int a ,b;
	cout<<"Give two number find the LCM of this Number:"<<endl;
	cin>>a>>b;
	int minl=a*b;
	for(int i=2;i<=max(a,b);i++)
	{
		if(a%i==0 || b%i==0)
		{
			if(i> minl)
			{
				minl=i;
			}
		}
	}
	cout<<"the LCM of two number is :"<<minl<<endl;
	return 0;
}