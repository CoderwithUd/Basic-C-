#include<iostream>
#include<vector>
#include<deque>
#include<list>
using namespace std;
int main()
{
/*	vector<int>a;

	vector<int> v(5,10);
for(int i:v)
{
	cout<<i<<" ";
}cout<<endl;
vector<int> b(v);
for(int j:b)
{
	cout<<j<<" ";
}cout<<endl;


	cout<<"vector size of capacity:"<<a.capacity()<<endl;
	
	a.push_back(10);
	cout<<"vector size :"<<a.capacity()<<endl;
	a.push_back(20);
	cout<<"vector size :"<<a.capacity()<<endl;
	a.push_back(30);
	cout<<"vector size :"<<a.capacity()<<endl;
	cout<<a.size()<<endl;
	cout<<"element of secondd index;"<<a.at(2)<<endl;
	cout<<"last "<<a.back()<<endl;
	cout<<"first "<<a.front()<<endl;
	for(int i:a)
	{
		cout<<i<<"";
	}cout<<endl;
	a.pop_back();
	for(int i:a){
		cout<<i<<"";
	}cout<<endl;
	cout<<"size"<<a.size();
	a.clear();
cout<<"size after"<<a.size();

// dequee
deque<int>d;
d.push_back(19);
d.push_back(20);
d.push_front(1);
d.push_front(2);
for(int it:d)
{
	cout<<it<<" ";
}cout<<endl;
cout<<"First element of deque:"<<d.front()<<endl;
cout<<"Last element of deque :"<<d.back()<<endl;
d.pop_back();
d.pop_front();
for(int it :d)
{
	cout<<it<<" ";
}cout<<endl;
d.erase(d.begin(),d.begin()+1);
for(int i:d)
{
	cout<<i<<" ";
}cout<<endl;
d.clear();
for(int i:d)
{
	cout<<"claer"<<i<<" ";
}cout<<endl;
cout<<"Size"<<d.size()<<endl;


*/
//list data structue
list<int> l;
list<int> c(5,10);
for(int i:c)
{
	cout<<i<<" ";
}cout<<endl;

l.push_back(2);
l.push_back(1);
l.push_front(19);
l.push_front(20);
list<int> s(l);
for(int i:s)
{
	cout<<i<<" ";
}cout<<endl;
cout<<"this is our list element :"<<endl;
for(int it:l)
{
	cout<<it<<" ";
}cout<<endl;

cout<<l.front()<<endl;
cout<<l.back()<<endl;
l.erase(l.begin());
for(int it:l)
{
	cout<<it<<" ";
}cout<<endl;
l.erase(l.end());
cout<<"size of list element  :"<<l.size()<<endl;






	return 0;
	

}