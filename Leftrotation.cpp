#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	arr[5]=arr[0];
	for(int i=0;i<5;i++)
	{
		arr[i]=arr[i+1];
	}
    for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}