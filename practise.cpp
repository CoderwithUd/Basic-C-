#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[5]={2,447,387,476,2};
	int flag =1;
	for(int i=0;i<5 && flag;i++)
	{
		flag=0;
		for(int j=0;j<5;j++)
		{

			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				flag=1;
			}

		}
		
	}
	for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" "<<endl;

		}
		return 0;
}