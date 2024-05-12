#include<iostream>
#include<cstring>
//#include<cstdio>
using namespace std;
int main(){
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i=0;i<len/2;i++){
        char t = str[i];
        str[i]=str[len -i-1];
        str[len -i-1]=t;
    }
    puts(str);
    
    
    return 0;
}