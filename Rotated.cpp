#include<iostream>
using namespace std;
int main()
{
    int N,last,i;
    cin>>N;
    int arr[N];
    for( i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<N;i++)
    {
        int j;
        last = arr[N-1];
        for(j=N-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    for( i=0;i<N;i++)
    {
        cout<<arr[i]<<"  ";
    }
return 0;
}