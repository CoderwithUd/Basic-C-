/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
/*
int main()
{
   int n ,i, sum =0, a=0,b=1;
   cin>>n;
   for(i=1 ; i<n ; i++){
       if(i == 1){
           cout<<a <<",";
           continue;
       }
       else if( i== 2){
           cout<<b;
       }
       sum = a+b;
       a= b;
       b=sum;
       cout<<","<<sum;
   }
    return 0;
}

int fib(int n){
   if(n==1 || n==0){
       return n;
   }
   else 
      return (fib(n-1)+fib(n-2));
    
}
int main(){
    int n,i=0;
    cin>>n;
    while(i<n){
        cout<<" "<<fib(i);
        i++;
    }
    
    return 0;
}



*/

#include<iostream>
#include<cstdio>

using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    else
       return (fib(n-1)+fib(n-2));
}
int main()
{
    int n,i;
    cin>>n;
    cout<<fib(n);
    getchar();
    return 0;
}