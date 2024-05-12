#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Fill Array element :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    cout<<"Sum of array element :"<<sum<<endl;
    return 0; 
}