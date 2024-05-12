#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printResult(const vector<int>& arr,int n)
{
	cout<<"the merge sort result element....."<<endl;
	for(int i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";
	}
}
void mergeing(vector<int> &arr,int  begin,int  mid,int end )
{
	int n1=mid-begin+1;
	int n2=end-mid;
	auto *l=new int[n1], *r=new int[n2];
	for(auto i=0;i<n1;i++)
	{
		l[i]=arr[begin+i];
	}
	for(auto i=0;i<n2;i++)
	{
		r[i]=arr[mid+1+i];
	}
	auto i1=0,i2=0;
	int index=begin;

	while(i1<n1 && i2<n2 )
	{
		if(l[i1]<=r[i2])
		{
			arr[index]=l[i1];
			i1++;
		}
		else{
			arr[index]=r[i2];
			i2++;
		}
		index++;
	}
	 while(i1<n1)
	 {
		arr[index]=l[i1];
		i1++;
		index++;
	 }
	 while(i2<n2)
	 {
		arr[index]=r[i2];
		i2++;
		index++;
	 }
    delete[] l;
	delete[] r;
   
}
void merge(vector<int>&arr,int begin,int end){
	if(begin>=end)
	{
		return ;
	}
	int mid=begin+(end-begin)/2;
	merge(arr,begin,mid);
	merge(arr,mid+1,end);
	mergeing(arr,begin,mid,end);
}
int main()
{
	int n;
	vector<int>arr;
	cout<<"give the  size of element for merge sort ...."<<endl;
	cin>>n;
	cout<<"give the element...."<<endl;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		arr.push_back(num);
	}
	merge(arr,0,n-1);
	printResult(arr, n);
	return 0;

}