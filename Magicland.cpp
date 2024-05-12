#include<iostream>
using namespace std;
/*void check(int arr[])
{
    int count_0,count_1;
    for(int j=0;j<7;j++)
        {
            if(arr[j]=0)
            {
                count_0 +=1;
            }
            else
            {
                count_1 +=1;
            }
        }
        if(count_0 < count_1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }*/

int main()
{
    int t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int arr[7];
        for( j=0;j<7;j++)
        {
            cin>>arr[j];
            int count_0=0,count_1=0;
        for( j=0;j<7;j++)
        {
            if(arr[j] = 0)
            {
                count_0 +=1;
            }
            else
            {
                count_1 +=1;
            }
        }
        if(count_0 < count_1)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
        }
    }
    
    return 0;
}