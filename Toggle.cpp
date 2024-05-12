#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str ;
    cin>>str;
    int n ,i;
    for(i=0;str[i];i++){
        if(str[i] ==("A"||"Z"))
        {
            tolower(str[i]);
        }
        else
        {
            toupper(str[i]);
        }
    }
    for(i=0;str[i];i++){
        cout<<str[i];
    }
    return 0;

}