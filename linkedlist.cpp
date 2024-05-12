#include<iostream>
using namespace std;

class node{
	public:
	char data;
	node* next;

	//constructor using for new node.
	node(char data)
	{
		this ->data=data;
		this ->next;
	}

};

int main(){
 node* node1 =new node('U');
 cout<<node1 ->data<<endl;
 cout<<node1->next<<endl;

	return 0;
}