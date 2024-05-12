/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int fact(int n);
int main()
{
    int x ,sum=0,rem,f;
    cin>>x;
    int n=x;
    while(n!=0){
         rem=n%10;
         f= fact(rem);
         sum =sum+f;
         n /=10;
    }
    if(sum == x){
        cout<<"Strong Number";
    }
    else 
       cout<<"Not a strong number";

    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    else
        return (n*fact(n-1));
}