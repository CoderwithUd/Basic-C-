#include<iostream>
using namespace std;
int main ()
{
    int a[5],loc,i,j,min;
    cout<<"Inserted the element \n";
    for(i=0;i<5;i++){
        cin>>a[i];
        }
    for(i=0;i<5-1;i++){
        min =a[i];
        loc =i;
        for(j=i+1;j<5;j++)
        {
            if(min>a[j]){
                min=a[j];
                loc =j;
            }
           
        }
        if(i != loc){
        int t = a[i];
        a[i]=a[loc];
        a[loc]=t;
    }
    }
    for(i=0;i<5;i++){
        cout<<a[i]<<" ";
        
    }
    
    return 0;
}