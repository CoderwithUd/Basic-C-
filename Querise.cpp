#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int l,h;
        cin>> l>>h;
        if(l<=N && N<=h)
        {
            cout<<"Yes \n";
            continue;
        }
        else
        {
            cout<<"No \n";
            continue;
        }
    }
    return 0;
}