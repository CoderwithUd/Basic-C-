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
    int n,num=1;
    cin>>n;
    for(int i=n;i!=0;i--){
        num=num*i;
    }
    cout<<num;
    return 0;
}
*/

int fact( int n){
    if(n>1){
        return n*fact(n-1);
    }
    else 
       return 1;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}