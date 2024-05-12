#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,mul=0;
    int max = INT_MIN;
    cout<<"Size of Array Element:";
    cin>>n;
    int arr[n];
    cout<<"Inserted the element \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        mul=arr[i]*arr[i+1];
        if(max<mul)
        {
            max=mul;
        }
    }
    cout<<max;
    return 0;
}