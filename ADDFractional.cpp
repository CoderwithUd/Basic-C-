#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int k=5;
   do {
    k/=k%3;
    if (k>1)
    break;
    else
    {
    cout<<k;
    }

    
   }
    while(k++<2);
    return 0;
}