#include<iostream>
using namespace std;
int solve(int n,int k)
{
    static int count =0;
    if(n<k || n==0)
    {
        return 0;
    }
    else
   {
    solve(n-k,k);
    count +=1;
    return count; 
   }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,K,ans;
        cin>>N>>K;
        ans = solve( N ,K);
        cout<<ans;
    }
    return 0;
} 
/*#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
      if(n%k==0)
        {
            cout<<n/k<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
   return 0;
}*/