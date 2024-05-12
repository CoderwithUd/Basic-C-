#include<iostream>
#include<math.h>
using namespace std;/**
int main(){
	/*int a=2;
	int b=4;
	cout<<"a&b"<<" "<<(a&b)<<endl;
	cout<<"a&b"<<" "<<(~b)<<endl;
	cout<<"a&b"<<" "<<(a^b)<<endl;
	cout<<"a&b"<<" "<<(a|b)<<endl;
	cout<<"a&b"<<" "<<(5<<2)<<endl;
	cout<<"a&b"<<" "<<(5>>2)<<endl;
	*
int a=0xff,b;
b=a<<2;
cout<<b<<endl;
int c=10,d=20;
cout<<(c)+(--d)]<<endl;
return 0;

}*/


int main()
{
	int num;
	cout<<"Please any number N:"<<endl;
	cin>>num;
	int ans=0;
	int i=0;
	while(num!=0)
	{
		//int bit=num%10;
		int bit = num & 1;
		ans=(bit*pow(10,i))+ans;
		num =num >> 1;
		//if(bit == 1)
		//{
		//	ans=pow(2,i)+ans;
		//}
		//num=num /10;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}