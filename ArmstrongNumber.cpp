#include<iostream>
#include<cmath>

using namespace std ;
int len(int n){
    int rem,count =0;
    while(n!=0){
        rem=n%10;
        count +=1;
        n /=10;
    }
    return count;
}

 
int main()
{
    int n,p,x,sum=0,rem;
    cin>>x;
    n = x;
    
    p=len(x);

    while(n!=0)
    {
        rem=n%10;
        sum=sum+round(pow(rem,p));
        n /=10;
    }
    if(sum == x){
         cout<<"Armstrong number";
    }

    else
    {
         cout<<"Not an Armstrong number";
    }
    return 0;

}