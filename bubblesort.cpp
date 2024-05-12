#include<iostream>
using namespace std;

int main(){
    int a[5],i,j,flag=1;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5-1 && flag;i++)
    {
        flag =0;
        for(j=0;j<=5-i-1;j++){
            if(a[j]>a[j+1]){
                int t =a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                flag = 1;
                                                                                                                                }        
        }
    }
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}