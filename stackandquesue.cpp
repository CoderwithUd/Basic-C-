#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	/*stack<string>s;
	s.push("Uday");
	s.push("Manvi");
	s.push("Isha");
	s.push("Sameeya");
	s.push("Babita");

	cout<<"First element of stack:"<<s.top()<<endl;
	s.pop();
	cout<<"Second element of stack:"<<s.top()<<endl;
	cout<<"stack is empty or not ?"<<s.empty()<<endl;
	// queue 
	queue<string> q;
	q.push("a");
	q.push("b");
	q.push("c");
	cout<<"First one:"<<q.front()<<endl;
	cout<<"First one:"<<q.back()<<endl;
	cout<<"First one:"<<q.size()<<endl;
	cout<<"First one:"<<q.empty()<<endl;
	cout<<"First one:"<<s.size()<<endl;
	q.pop(); -
	cout<<"delete one"<<q.front()<<endl;*/
	priority_queue<int>mixi;


	priority_queue<int,vector<int>,greater<int>> mini;

	//maxi;
	mixi.push(19);
	mixi.push(21);
	mixi.push(18);
	mixi.push(11);
	mixi.push(12);
	mixi.push(15);
	int n=mixi.size();
	cout<<"Size of queue:"<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<mixi.top()<<endl;
		mixi.pop();
	}
	cout<<"Khali he kya bhai ?? -->"<<mixi.empty();
	mini.push(19);
	mini.push(21);
	mini.push(18);
	mini.push(11);
	mini.push(12);
	mini.push(15);
	int x=mini.size();
	cout<<"Size of queue:"<<n<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<mini.top()<<endl;
		mini.pop();
	}
	cout<<"Khali he kya bhai ?? -->"<<mini.empty();


	return 0;	
}