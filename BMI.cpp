#include<iostream>
using namespace std;
int main()
{
    int n,m,h,BMI,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m>>h;
        BMI=m/(h*h);
        if(BMI<=18)
        {
            cout<<1;
        }
        else if( BMI <=24)
        {
            cout<<2;
        }
        else if( BMI <=29)
        {
            cout<<3;
        }
        else 
        {
            cout<<4;
        }
    }
    return 0;
}