#include<iostream>
#include<string.h>
//# define n cout<<"Size of array :";cin>>n;
using namespace std;
int sort_Array(int a[],int n)
{
    int i;
    for(int i=0;i<n;i++);
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int x =a[j];
                a[j]=a[j+1];
                a[j+1]=a[j];
            }
        }
    }
}
int main()
{
    int n1,n2;
    int arr1[n1],arr2[n2];
    cout<<"Size of First array :\n";
    cin>>n1;
    cout<<"Size of second array :\n";
    cin>>n2;
    sort_Array(arr1[n1],n1);
    sort_Array(arr2[n2],n2);
    if(strcmp(arr1[n1],arr2[n2]))
    {
        cout<<"Same";
    }
    else
    {
        cout<<"Not Same";
    }
    return 0;
    
}
     
