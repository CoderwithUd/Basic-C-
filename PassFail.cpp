#include<iostream>
using namespace std;
int main()
{
    int arr[3],sum;
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sum=arr[1]*3;
    if(arr[2]<sum)
    {
        cout<<"PASS";
    }
    else
    {
        cout<<"FAIL";
    }

return 0;
}
