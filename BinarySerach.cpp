#include<iostream>
using namespace std;

int main()
{
	int a[5]={1,52,45,45,65};
	int n;
	cout<<"fill value of n:";
	cin>>n;
	int top=0,bottom=5;
	while(top<=bottom)
	{
		int mid=(top+bottom)/2;
		if(n==a[mid])
		{
			cout<<"Found its element.";
			break;
		}
		else
		{
			if(n<a[mid])
			{
				bottom=mid-1;
			}
			else{
				top=mid+1;
			}
		}

	}
	if(top>bottom)cout<<"Not found";
	return 0;
}
