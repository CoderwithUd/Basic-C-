#include<iostream>
using namespace std;

int prime(int );
int main()
{
    int n,x,a,b,y;
    cin>>n;
    x= n/2;
    y=n-x;
    a = prime( x);
    b = prime( y);
    if( a && b )
    {
        cout<<n<<"can be expressed as sum of "<<x << "and"<< y;
    }
    else{
        cout<<n<<"can be expressed  not as sum of "<<x<< "and"<< y;
    }
    return 0;

}
int prime(int x){
    int flag=0;
    if(x == 1 && x== 0){
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i == 0){
            flag = 1;
        }

    }
    if(flag == 1){
        return 0;
    }
    else 
        return x;

}