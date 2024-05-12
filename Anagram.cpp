/*#include<iostream>
#include<cstring>
using namespace std;
void sort(char s[100])
{
    int i ,j,n,flag=1;
    n=strlen(s);
    for(i=0;i<n && flag;i++)
    {
        flag =0;
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                char t = s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
            flag =1 ;
        }
    }
   // cout<<s<<"\n";
}
using namespace std;
int main()
{
    //string str1,str2;
    char s1[100],s2[100];
    int x;
    cout<<"First Strings :";
    //gets(str1);
    cin>>s1;
    cout<<"Second Strings :";
    //gets(s2);
    cin>>s2;
    sort(s1);
    sort(s2);
    //cout<<s1<<"\n";
    //cout<<s2<<"\n";
   
    if(strcmp(s1,s2) )
    {
        cout<<" Not Anagram .";
    }
    else 
        cout<<" Anagram";
    return 0;
}
#include<iostream>

using namespace std;


int main()
{
    char s[100];
    cin>>s;
    int i ,j,n,flag=1;
    n=strlen(s);
    for(i=0;i<n && flag;i++)
    {
        flag =0;
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                char t = s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
            flag =1 ;
        }
    }
    cout<<s;
    return 0;
}*/

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
/*
class name {
    public:
    string a;
    string b;
    int check()
    {
        cin>>a;
        cin>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==b)
        {
            return true;
        }
        else
        return false;
    }
};

int main() {
    // Write C++ code here
    name o;
    int ans =o.check();
    std::cout << "Hello world!";
    cout<<ans<<endl;

    return 0;
}


//bubble sort 

int search(int arr[],int i,int j,int x)
{
    if(i==j)
    {
        if(arr[i]==x)return i;
        else return -1;
    }
    else{
        int mid=(i+j)/2;
        if(arr[mid]==x)return mid;
        else{
            if(arr[mid]>x){
                search(arr,mid+1,j,x);
            }
            else{
                search(arr,i,mid-1,x);
            }
        }
    }
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"find value of x:"<<endl;
    cin>>x;
   int ans=search(arr,0,5,x);
   cout<<ans;
    //algo bubble sort 
    /*int flag =1;
    for(int i=0;i<5 && flag;i++)
    {
        flag=0;
        for(int j=0;j<5-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
             swap(arr[j],arr[j+1]); 
             flag=1;  
            }
        }
    }*/
    /// selectio sort/*
    /*
    for(int i=0;i<5;i++)
    {
        int min=arr[i];
        int loc =i;
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]<min)
            {
                min =arr[j];
                loc=j;
            }
            if(loc !=i)
            {
                swap(arr[i],arr[loc]);
            }
        }
    }*/

    //insertion sort
    /*
    for(int i=1;i<5;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }*
    return 0;
}
*///selection sort 
int fibo(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
    
    {
        return (fibo(n-1)+fibo(n-2));
    }
}
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c,i;
    cout<<a<<" "<<b<<" ";
    for(i=2;i<n;i++)
    {
        int temp=b;
        c=a+b;
        a=b;
        b=c;
        cout<<b<<" ";
    }
    cout<<fibo(n);
    return 0;
}


