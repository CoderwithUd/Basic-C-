#include<iostream>
using namespace std;
int main()
{
	char s[10]={'a','b','\0','1','3'};
	string str="ab 13";
	for(int i=0;i<10;i++)
	{
		cout<<s[i];
	}cout<<endl;
	cout<<str<<endl;
	return 0;

}