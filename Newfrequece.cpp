#include<iostream>
#include<stack>
using namespace std;
void check(string s,char c);
void sort(string s,int n)
{
     int i,j;
     for(i=0;i<n;i++)
     {
        for(j=1;j<n-i-1;j++)
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
    string str;
    int i=0,n,j,k,count;
    stack<char>stack;
    cin>>str;
    n=str.size();
    sort(str,n);
    for(i=0;i<n;i++)
    {
       for(j=0;str[j];j++)
       {
        char c=str[j];
        if(c=str[j+1])
        {
            stack.push(c);
        }
       }
       while(!stack.empty())
       {
        count+=1;
        stack.pop();
       }
       cout<<"The frequence of is"<<count<<endl;
    }
    return 0;
}
void check(string s,char c)
{
     int count = 0,i;
     for(i=0;i<=s.size();i++)
     {
        if(c=s[i])
        {
            count=count+1;
        }
     }
     cout<<"The frequene of  "<<c<<"is"<<count<<endl;
}