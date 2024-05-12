/*#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    cout<<"Enter your Array element :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"Array Element "<<i <<":"<<arr[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0?cout<<"Even ":cout<<"Odd");
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=5;j>i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}

