#include<iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    if( c== 'a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O'  || c=='U'  ){
        cout<<"Vowel";
    }
    else if(!isalpha(c)){
        cout<<"Invalaid input";
    }
    else
      cout<<"Consonant";
  return 0;
}