#include<iostream>
using namespace std;
int main()
{
    int n,flag =0;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag +=1;
        }
    }
    
    if(flag>2 || (n==0 ||n==1))
    {
        cout<<"Not";
    }
   
    
    else
    {
        cout<<"Prime";
    }
    return 0;
}