/*#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,rev;
    cin>>str;
    rev = str;
    reverse(str.begin(),str.end());
    if(rev == str){
        cout<<"Palindrome string";
    }
    else
    {
        cout<<"Not palindrome string";
    }
    return 0;
}*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s,str;
    int n;
    cin>>s;
    str = s;
    n=s.size();
    for(int i=0;i<=n/2;i++)
    {
        char t =s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t ;
    }
    cout<<"Reverser string :"<<s<<endl;
    if(str == s )
    {
        cout<<"Palindrome string ";
    }
    else
    {
        cout<<"not palindrome string";
    }
    return 0;

}