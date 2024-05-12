#include<iostream>
#include<string>
using namespace std;
/*int main()
{
    //char str1[100],str2[100];
    string str1,str2;
    int i ,j,n1,n2,flag =1;
    cout<<"Frist String =";
    cin>>str1;
    cout<<"Second String = ";
    cin>>str2;
    n1 =str1.length();
    n2 = str2.length();
    if(n1==n2);
    {
        for(i=0;str1[i]!='\0';i++)
        {
            
            for(j=0;str2[i]!='\0' && flag;j++)
            {
                flag =0;
                if(str1[i]=str2[j])
                {
                     
                    if(str1[i]!= str2[j] && str2[j]=('*' || '?'))
                    {
                       flag = 1; 
                    }
                }
                else 
                {
                    flag =0;                }
                
            }
            
        }
        if(flag ) 
        cout<<"This is match ";

        else
         cout<<"This is not match";
    }
    return 0;
}*/\

bool check(char *s1,char *s2)
{
    if(*s1 =='\0' || *s2 == '\0')
        return true;
    if(*s1 == '*' && (s1 +1)!='\0' && *s2 == '\0')
        return false;
    if(*s1 == '?' ||*s1==*s2)
        return check(s1+1,s2+1);
    if(*s1 == '*')
        return check(s1+1,s2)||check(s1,s2+1);
    return false;
}
void testing(char *s1,char *s2)
{
    check(s1,s2)?puts("Yes"):puts("No");
}
int main()
{
    char s1[20],s2[20];
    cout<<"Wild string :";
    cin>>s1;
    cout<<"String :";
    cin>>s2;
    testing(s1,s2);
    return 0;
}