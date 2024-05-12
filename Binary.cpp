/*#include<iostream>
using namespace std;
string binary(int n)
{
    int binaryNum[32];
    int i=0;
    string ans;
    while(n>0)
    {
        binaryNum[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        for(int k=0;ans[k];i++)
        {
            ans[k]=binaryNum[j];
        }
    }
    for(int i=0;i<ans[i];i++)
    {
        cout<<ans[i];
    }
    return ans;
}
int main()
{
    int m,n,len,i;
    cout<<"Range of Array element N and M : ";
    cin>>n>>m;
    len=m-n;
    int arr[len];
    for(i=0;i<len;i++)
    {
        arr[i]=++n;
    }
    for(i=0;i<len;i++)
    {
        cout<<arr[i];
    }
    for(i=0;i<len;i++)
    {
        binary(arr[i]);
    }

    return 0;

}*/

#include<iostream>
#include<stack>
using namespace std;

void  binary(int n){
    stack<int>std;
while(n>0)
{
    int rem=n%2;
    std.push(rem);
    n=n/2;
}
for(;!std.empty();)
{
    cout<<std.top();
    std.pop();
}
}

int main(){
    //user input for decimal value
    int num;
    cout<<"give any decimal number:"<<endl;
    cin>>num;
    binary(num);
    return 0;
}
/**
#include <iostream>
#include <stack>
using namespace std;

void binary(int n) {
    stack<int> stk;
    while (n > 0) {
        int rem = n % 2;
        stk.push(rem);
        n = n / 2;
    }
    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
}

int main() {
    // User input for decimal value
    int num;
    cout << "Enter any decimal number: " << endl;
    cin >> num;
    binary(num);
    return 0;
}
\*/