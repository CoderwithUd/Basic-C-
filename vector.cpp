#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    //int max = INT_MIN;
    cout<<"Size of Array Element:";
    cin>>n;
    int arr1[n];
    int arr2[n];
    cout<<"Inserted the element First :\n";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Inserted the element Second :\n";
    for(i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(arr1[i]*arr2[i]);
    }
    cout<<"Result of Addtion of vector Array :"<<sum;
    return 0;
}