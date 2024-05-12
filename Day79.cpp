/*You are given a binary string S of lengthN. You can perform the following operation on S:
 Pick any set of indices such that no two picked indices are adjacent.
 Flip the values at the picked indices (i.e. change 0to 1 and 1 to 0).
For example, consider the string S=1101101.
If we pick the indices{1,3,6}, then after flipping the values at picked indices, we will get 110110
1→0111111.
Note that we cannot pick the set{2,3,5} since 2 and 3 are adjacent indices.
Find the minimumnumber of operations required to convert allthe characters of S to 0.*/

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count =0;
		cin>>n;
		char s[n];
		cin>>s;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1' || s[i+2]=='1')
			{
				s[i]=='0';
				s[i+2]=='0';
				count +=1;
			}
		}
		cout<<count<<endl;

	}
	return 0;
}