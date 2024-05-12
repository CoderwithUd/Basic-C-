#include<iostream>
using namespace std;
int main()
{
    int n,i,rem,sum=0,real;
    cin>>real;
    n=real ;
    while(n!=0)
    {
        rem =n%10;
        sum =sum*10 +rem;
        n /=10;
    }
    if(sum == real){
        cout<<"Palindrome";
    }
    else 
        cout<<"Not a Palindrom";
    return 0;
}