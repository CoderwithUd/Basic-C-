#include<iostream>
#include<cstring>
using namespace std;
void sort(string s,int n)
{
     int i,j;
     for(i=0;i<n;i++)
     {
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                char t =s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
     }
     cout<<s;
}
int main()
{
    string str,s;
    int i ,j,len,count =0;
    cin>>str;
    //gets(str);
    len=str.size();
    sort(str,len);
    
    
    
 /*   for(i=0;i<len;i++)
    {
        for(j=0;j<=len-i-1;j++)
        {
            if(str[j]>str[j+1])
            {
                char temp =str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }*/
    
       //puts(str);
    return 0;
}