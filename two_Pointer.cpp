#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
	int flag=1;
	for(int i=0;i<n && flag;i++)
	{
		flag=0;
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int x;
				x=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=x;
				flag=1;
			}
		}
	}

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	cout<<"element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int target;
	cout<<"Target value of an array:"<<endl;
	cin>>target;
	sort(a,n);
	int left=0;
	int right=n-1;
	while(left<right)
	{
		int sum=a[left]+a[right];
		if(sum==target)
		{
			cout<<"Yes"<<endl;
			cout<<a[left]<<" "<<a[right]<<endl;
			break;
		}
		else if(sum<target)
		{
			left++;
		}
		else right--;
	}
cout<<"Not found it is not aviable :"<<"-1"<<endl;
return 0;

}