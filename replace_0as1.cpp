#include<iostream>
using namespace std;

int check(int x)
{
    int sum= 0;
    if(x !=0){
        sum =sum*10+x;
        return sum;
    }
    else
    {
        sum =sum*10+1;
        return sum;
    }
}
int rev(int a){
    int sum =0;
    while(a!=0){
       int  rem = a%10;
        check(rem);
        a /= 10;
    }
    return sum;
}
int main()
{
    int n,i,ans=0,b;
    cin>>n;
     ans = rev(n);
     b = rev(ans);
     cout<<b;
    
    
    
    return 0;
}
