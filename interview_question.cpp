#include<iostream>
#include<algorithm>
using  namespace std;

bool check(string s1,string s2){
	if(s1==s2)return true;
	
	return false;
}
int main()
{
	string s;
	cout<<"give the sutiable string for check palidrom or not:::-----"<<endl;
	cin>>s;
	int n=s.size();
	int i=0;
	for(int j=0;j<=n;j++)
	{
		if(s[j]== ' '|| j==n)
		{
			string first=s.substr(i,j);
			reverse(s.begin()+i,s.begin()+j);
			string temp=s.substr(i,j);
			if(check(first,temp)){
				cout<<first<<"this is palidrome substring---"<<endl;
			}
			else{
				cout<<"Not palidrome substrings---"<<first<<endl;
			}
		}
		i=j+1;
		
	}
	return 0;
}