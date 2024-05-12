/*#include<iostream>
using namespace std;
void printThearray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"";
	}
	cout<<endl;
}


void generateAllBinarystrings(int n,int arr[],int i)
{
	if(i==n)
	{
		printThearray(arr,n);
	}
	arr[i]=0;
	generateAllBinarystrings(n,arr,i+1);
	
	arr[i]=1;
	generateAllBinarystrings(n,arr,i+1);
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	generateAllBinarystrings(n,arr,0);
	return 0;
}*/
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int  binary_fun(int n)
{
	int binaryNum[32];
	int i=0;
	while(n>0)
	{
		binaryNum[i]=n%2;
		n /=2;
		i++;
	}
	for(int j=i-1;j>=0;j++)
	{
		cout<<binaryNum[j]<<" ";
	}
return 0;
}
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s;
	for(int i=0;i<pow(2,n);i++)
	{
	    s=binary_fun(i);
		cout<<s<<" ";
	}
	return 0;
}