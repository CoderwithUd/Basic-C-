#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Give two number for find HCF:"<<endl;
	cin>>a>>b;
	int maxf=1;
	for(int i=2;i<max(a,b);i++)
	{
		if(a%i==0 && b%i==0)
		{
			if(i>maxf)
			{
				maxf=i;
			}
		}
	}
	cout<<"the HFC of a and b is equal to is :"<<maxf<<endl;
	int lcm=(a*b)/maxf;
	cout<<"THe LCM of two number is :"<<lcm<<endl;2
	return 0;

}