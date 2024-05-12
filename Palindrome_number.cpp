
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int count ,i,sum=0;
    cout<<"Enter any count interger :";
    cin>>count;
    while(count!=0){
        int a =count%10;
        sum=sum+1;
        count=count/10;
    }
    return 0;
}
