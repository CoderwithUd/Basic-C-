#include<iostream>
using namespace std;

int main()
{
    int n , i ;
    bool P_n =true;
    cin>>n;
    if(n==0 || n==1)
    {
       P_n=false;
    }
    for(i=2;i<=n/2;i++){
        if(n %i == 0){
            P_n =false;
            break;
        }

    }
    if(P_n){
        cout<<n<<" is a prime number ";
    }
    else
        cout<<n<<" is not not prime number";
         
    
    return 0;
}