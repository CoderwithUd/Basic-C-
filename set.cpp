#include<iostream>
#include<set>
using namespace  std;
int main()
{
	set<int> a;
	int arr[10]={10,20,30,4,5,6,7,8,9,0};
	for(int i=0;i<10;i++)
	{
		a.insert(arr[i]);
	}
	for( auto j:a)
	{
		cout<<j<<" ";
	}cout<<endl;
	set<int>::iterator it=a.begin();
	it++;
	a.erase(it);
	for(auto i:a)
	{
		cout<<i<<endl;
	}
	set<int>::iterator n=a.find(5);
	for(auto it=n;it!=a.end();it++)
	{
		cout<<*it<<" ";
	}cout<<endl;
	return 0;
	
}
