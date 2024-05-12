#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,sqr;
    cout<<"Size of Array : \n";
    cin>>n;
    int arr[n];
    cout<<"Element of Array First:\n";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        sqr =i*i;
        sum += sqr;
    }
    cout<<"Sum of Square :"<<sum<<endl;
    return 0;
}