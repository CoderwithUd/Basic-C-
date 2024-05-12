/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(y>=0){
        x<=0?cout<<"This point lies in second quadrant.":cout<<"This point lies in first quadrant.";
    }
    else if( x==0 & y==0)
    { cout << "Point lie on center"};
    else
        x<=0?cout<<"This point lies in third quadrant.":cout<<"This point lies in fourth quadrant.";
       
    return 0;
}
