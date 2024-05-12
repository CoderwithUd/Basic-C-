#include<iostream>
using namespace std;
int mian()
{
    char str[100];
    string a="";
    int i,j;
    int sum=0;
    cin>>str;
    while(str[i]='\0')
    {
        if(isdigit(str[i]))
        {
            a +=str[i];
        }
        else{
            sum +=atoi(a.c_str());
            a="";
        }
        i++;
    }
    sum += atoi(a.c_str());
    
    cout<<sum;
    return 0;
}/*
#include<iostream>
using namespace std;
int  main()
{
    cout<<"Hello";
    int a, b,c;
    cin>>a >>b;
    c=a+b;
    cout<<c;
    return 0;
} */