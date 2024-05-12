#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Size of Array Element:";
    cin>>n;
    int arr[n];
    cout<<"Inserted the element \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        int a=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=a;
    }
    cout<<"Reverse of Array element: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}