#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    double count=0;
    if(n <=25){
        count =1+1+0.5;
    }
    else if(n<=50){
        count = 1+1+0.5;
    }
    else if(n<=75){
        count = 1+0.25+0.5+1;
    }
    else{
        count = 2.875;
    }
    double ans = 0.25*(count);
    cout<<endl;
    cout<<ans<<endl;
    
}