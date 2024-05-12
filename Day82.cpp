/*You are givenNbinary strings of length Neach. You need to find a binary string of length N which is 
different from all of the given strings.
Note:
 A binary string is defined as a string consisting only of '0' and '1'.
 A string is considered different from another string when they have different lengths, or when 
they differ in at least one position.
Input Format
 The first line will contain T- the number of test cases. Then the test cases follow.
 The first line of each test case contains N - the number of strings and length of strings.
 Each of the nextN lines contains a binary string of length N.
Output Format
For each test case, print on one line a binary string of length N, which is different from all of the given 
strings. If there are multiple possible answers, print any.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		string  str="";
		for(int i=0;i<n;i++)str[i]+='0';
		vector<string>binary(n);
		for(i=0;i<n;i++)
		{
			cin>>binary[i];
		}
		for(i=0;i<n;i++)
		{
			if(binary[i][i]=='0')
			{
				str[i]='1';
			}
		}
		cout<<str;

	}
return 0;
}