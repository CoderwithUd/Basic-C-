#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    int i,n;
    cin>>str;
    n= strlen(str);
    for(i=0;i<n;i++)
    {
        if(i==0||i==(n-1))
        {
            str[i] =toupper(str[i]);
        }
        else if (str[i] =="")
        {
            str[i-1]=toupper(str[i-1]);
            str[i+1]=toupper(str[i+1]);
        }
    }
    
    cout<<str;
    return 0;
}