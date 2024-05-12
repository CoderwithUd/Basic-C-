#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    gets(str);
    int i,n=0;
    for(i=0;str[i];i++){
        n +=1;
    }
    cout<<n;
    return 0;
}