#include<iostream>
using namespace std;
int checkV(char c)
{
    if( c = ("a"||"e"||"i"||"o"||"u" ||"A"||"E"||"I"||"O"||"U"))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    string str,rev;
    int  j=0,n = str.size();
    for(int i=0 ;str[i];i++)
    {
        if(checkV(str[i])== 0)
        {
            rev[j]=str[i];
            j++;
        }
    }
    rev[j]='\n';
    for(int i =0;i<=n;i++)
    {
        cout<<rev[i];
    }
    
    return 0;
}