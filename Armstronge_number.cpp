
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int n , r , temp , sum =0;
    cout<<"Enter Your number:";
    cin>>n;
    temp = n;
    while(n!=0)
    {
        r=n%10;
        sum =sum +(r*r*r);
        n=n/10;
    }
    if( temp == sum)
    cout<<"Armstrong Number :"<<temp<<endl;
    else 
    cout<<"Not Armstrong Number :"<<temp<<endl;
    
    return 0;
}
