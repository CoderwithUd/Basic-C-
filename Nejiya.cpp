#include<iostream>
using namespace std;
int main()
{
    int n,i,k,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k ;
        cout<<" ";
        cin>>x;
        cout<<" \n";
        if(k<=x)
        {
            cout<< 0;
        }
        else
        {
            cout<< (k-x);
        }
    }
   
    return 0;
}