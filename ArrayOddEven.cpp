#include<iostream>
using namespace std;
int main()
{
    int n ,i,even =0,odd =0;
    cout<<"Enter Size of Array :";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"Element of array :"<<i <<"\n ";
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] %2==0)
        {
            even =even+1;
        }
        else 
        {
            odd =odd +1;
        }
    }
    cout<<"Number of Even of element in array :"<<even<<endl;
    cout<<"Number of Odd of element in array :"<<odd<<endl;
    return 0;
}