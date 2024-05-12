/*#include<iostream>
using namespace std;
int main()
{
    int N,i,j;
    cout<<"Size of Array:";
    cin>>N;
    int arr[N],min ,max;
    cout<<"Fill up Array element:";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    min =arr[0];
    max =arr[0];
    for(i=0;i<N;i++)
    {
        //max=arr[0];
        if(max <arr[i])
        {
            max=arr[i+1];
        }
    }
    cout<<"Max element of Array :"<<" "<<max<<"\n";
    for(i=0;i<N;i++)
    {
        //min =arr[0];
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Mix Element of Array :"<<" "<<min<<"\n";
     return 0;
}*/


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N,i;
    cout<<"Size of Array:";
    cin>>N;
    int arr[N];
    cout<<"Fill up Array element:";
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+N);
    int max=arr[N-1];
    int min=arr[0];
    cout<<"Max element of Array :"<<" "<<max<<"\n";
    cout<<"Min element of Array :"<<" "<<min<<"\n";
    return 0;

}