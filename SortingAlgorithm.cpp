#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(j=1;j<=n;j++)
    {
        key=arr[j];
        for(i=j-1;i >=0;i--)
        {
            if(key<=arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
void Selection_sort(int arr[],int n)
{
    int i,j,min_loc;
    for(i=0;i<n-1;i++)
    {
        min_loc =i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_loc])
            {
                min_loc=j;
            }
        }
    
        if(min_loc !=i)
        {
            int temp=arr[i];
            arr[i]=arr[min_loc];
            arr[min_loc] =temp;
        }
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void bubble_sort(int arr[],int n)
{
    int i,j,flag=1;
    for(i=0;i<n-1 && flag ;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag =1;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,i,chooice;
    cout<<"User Give Size of Array : "<<" \n";
    cin>>n;
    int arr[n];
    cout<<"User Give Array Element \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"!*************** Sorting Algorithm *****************!\n";
    cout<<" 1. Bubble Sort \n";
    cout<<" 2. Selecton Sort \n";
    cout<<" 3. Insertion Sort \n";
    cout<<" 4. Merge Sort \n";
    cout<<" 5. Quick Sort \n";
    cout<<" PLEASE SECECT  YOU SORTING ALGORITHM : \n";
    cin>>chooice;
    switch (chooice)
    {
    case /* constant-expression */1 :
        /* code */
        cout<<"BUBBLE SORT : \n";
            bubble_sort(arr,n);
        break;
    case 2:
        cout<<"SELECTION SORT : \n";
        Selection_sort(arr,n);
        break;
    case 3:
        cout<<"INSERTION SORT : \n";
        insertion_sort(arr,n);
        break;
    default:
        cout<<"BYDEFAULT VALUE CHOOICE OF SORTING ALGORITHM .";
        break;
    }
    return 0;
}