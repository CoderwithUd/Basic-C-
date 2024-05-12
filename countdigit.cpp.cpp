/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


using namespace std;

int main()
{
    int i,n,rem;
    int sum=0;
    cin>>n;
    for(i=0;n!=0;i++){
        n=n/10;
        sum=sum+1;
        
    }
    cout<<sum;

    return 0;
}
