#include<iostream>
#include<stack>
using namespace std;
int main()
{
    char str1[100],str2[100];
    int i=0,j=0;
    cin>>str1;
    while(str1[i]!='\0')
    {
        if(str1[i]!='('&& str1[i]!=')')
        {
            str2[j++]=str1[i];
        }
        i++;

    }
    str2[j]='\0';
    cout<<str2;
    
    return 0;
}