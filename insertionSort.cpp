#include<iostream>
using namespace std;
int main(){
	int a[5]={14,72,8,92,9};
	for(int j=1;j<5;j++)
	{
		int i=j-1;
		int key=a[j];
		while(i>=0&&key>a[i])
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}