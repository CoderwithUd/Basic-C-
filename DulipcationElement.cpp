#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int i,n,sum=0;
    cout<<"Size of Array : \n";
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Element of Array First:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Element of Array Second :\n";
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    sort(arr1, arr1 + n);
	sort(arr2, arr2 + n, greater<int>());

    for(i=0;i<n ;i++)
    {
        sum=sum+(arr1[i]*arr2[i]);
    }       
    cout<<sum<<endl;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[n];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        set<int> s(arr,arr+n);
        set<int>:: iterator it;
        for(auto it=s.begin(); it !=s.end();it++)
        {
            cout<<*it<<" ";
        }
    }
}*/

int dul(int arr[],int n)
{
    if(n==0||n==1)
    {
        cout<<n;
    }
    int temp[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] !=arr[i+1])
        {
            temp[j++]=arr[i];
        }
    }
        temp [j++]=arr[n-1];
        for(int i=0;i<j;i++)
        {
            arr[i]=temp[i];
        }
        return j;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int s=dul(arr,n);
        for(int i=0;i<s;i++)
        {
        cout<<arr[i]<<" ";
        }
    }
    return 0;
}