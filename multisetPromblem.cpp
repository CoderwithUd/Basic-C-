/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,set[10],i;
        cin>>N;
        for( i=0;i<10;i++)
        {
            cin>>set[i];
        }
        multiset<int>alice;(set,set+10);
        multiset<int>bob(set,set+10);
        if(alice==bob)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        
    }
    return 0;

}*/
#include<iostream>
#include<bits/stdc++.h>
#define endl "\n"
using  ll=long long;
using namespace std;
int  main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        set<ll>s;
        bool ok =true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            ll temp=mp[*it];
            if(temp%2)
            {
                ok=false;
            }
        }
        if(ok)
        {
            cout<<"Yes"<<endl; 
        }
        else{
            cout<<"No"<<endl;
        }
    }
}