/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>0){
        cout <<"Positive Number";
    }
    else if (n == 0 ){
        cout<<"Neither  positive or negative ";
        
    }
    else 
       cout<<"Negative Number";

    return 0;
}
