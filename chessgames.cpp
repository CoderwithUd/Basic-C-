#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        c=a+b;
        if(c<3 )
        {
            cout<<"1";
        }
        else if( c<=10 )
        {
            cout<<"2";
        }
        else if( 11<=c && c<=60)
        {
            cout<<"3";
        }
        
        else if(c>60)
        {
            cout<<"4";
        }
    }
    
    return 0;
}