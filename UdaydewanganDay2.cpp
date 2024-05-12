/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if((c>='a' && c<='z') || (c>='A' && c<='Z')){
        cout << "Alphabet";
    }
    else 
        cout<<"Not an Alphabet";

    return 0;
}
