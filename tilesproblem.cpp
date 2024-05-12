#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define A long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    A t;
    cin>>t;
    while(t--)
    {
    int N,M;
    cin>>N>>M;
    if(N==1 && M==1)
    {
        cout<<N<<endl;
    }
    else if(N%2==0 && M%2==0)
    {
        cout<<0<<endl;
    }
    else if(N%2==0 && M%2 !=0)
    {
        cout<<N<<endl;
    }
    else if(N%2!=0 && M%2==0)
    {
        cout<<M<<endl;
    }
    else{
        cout<<N+M-1<<endl;
    }
    }
    return 0;
}