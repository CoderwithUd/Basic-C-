/*You have a binary string S of lengthN. In one operation you can select a substring of S and reverse it. 
For example, on reversing the substring [2,4]S[2,4] for S=11000, we change 11000→10010.
Find the minimumnumber of operations required to sort this binary string.
It can be proven that the string can always be sorted using the above operation finite number of times.
Input Format
 The first line of input will contain a single integer T, denoting the number of test cases.
 Each test case consists of 22 lines of input.
o The first line of each test case contains a single integer N — the length of the binary 
string.
o The second line of each test case contains a binary string S of lengthN.
Output Format
For each test case, output on a new line — the minimum number of operations required to sort the 
binary string.*/
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
			if(s[i]=='1'&&s[i+1]=='0')
			{
				count+=1;
			}
		}
		cout<<count<<endl;
	}
	return 0;
	
}