#include<iostream>
using namespace std;
int handshake(int n)
{
    if (n==0){
        return 0;
    }

    else
        return n+handshake(n-1);
}

int main()
{
    int n,ans;
    cin>>n;
    ans = handshake(n-1);
    cout<<ans;
    return 0;
}