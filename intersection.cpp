#include<iostream>
#include<bits/stdc++.h>
using  namespace std;
/*class intersection{
	public:
	int arr1[5];
	int arr2[3];
	int n, m;
	void data{
		cout<<"Value of n;"<<endl;
		cin>>n;
		cout<<"Value of m;"<<endl;
		cin>>m;
		cout<<"Value of arr1;"<<endl;
		for(int  i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		cout<<"Value of arr2;"<<endl;
		for(int  i=0;i<m;i++)
		{
			cin>>arr2[i];
		}

	}
	
	void inter(int arr1[],int arr2[],int n,int m)
	{
		int i=0,j=0;
		vector<int>a;
		while(i<n || j<m)
		{
			if(arr1[i]==arr2[j])
			{
				a.push_back(arr1[i]);
			}
		}
		for(int i=0;i<a.size();i++)
		{
			cout<<a[i]<<" ";
		}
    }
};*/

int main()
{
	int arr1[5];
	int arr2[3];
	int n, m;
		cout<<"Value of n;"<<endl;
		cin>>n;
		cout<<"Value of m;"<<endl;
		cin>>m;
		cout<<"Value of arr1;"<<endl;
		for(int  i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		cout<<"Value of arr2;"<<endl;
		for(int  i=0;i<m;i++)
		{
			cin>>arr2[i];
		}
		int i=0,j=0;
		vector<int>a;
		while(min(n,m))
		{
			if(arr1[i]==arr2[j])
			{
				a.push_back(arr1[i]);
			}5
		}
		cout << "Output of begin and end: ";
    for (auto i = a.begin(); i != a.end(); ++i)
        cout << *i << " ";
    
	return 0;
}