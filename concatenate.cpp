/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str1,str2,result;
    int i;
    cout<<"First string ";
    cin>>str1;
    cout<<"Second string ";
    cin>>str2;
    for(i=0;i<str1.size();i++)
    {
        result=result+str1[i];
    }
    for(i=0;i<str2.size();i++){
        result=result+str2[i];
    }
    cout<<result<<" ";
    return 0;


}*/

#include<iostream>
using namespace std;
/*int  main()
{
    string str;
    int n=0,i;
    cin>>str;
    for(i=0;str[i];i++){
        n=n+1;
    }
    cout<<n;
    return 0;
}*/
#include<cstring>
int main()
{
    string s;
    int i,n;
    char t;
    cout<<"What is your string:";
    cin>>s;
    n=s.size();
    for(i=0;i<n/2;++i){
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    for(i=0;i<=n;i++){
        cout<<s[i];
    }
    
    return 0;

}



