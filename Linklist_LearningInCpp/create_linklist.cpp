#include<iostream>
using namespace std;
class node{

	public:
	int data;
	node* next;

node(int data)
	{
		this -> data=data;
		this ->next =nullptr; 
	}


};

class link {
node*head;
public:

link(){
  this->head=nullptr;
}

void insert(int data)
{
	node*newnode=new node(data);
	newnode->next=head;
	head=newnode;
}
void print()
{
	node *temp=head;
	while(head!=nullptr)
	{
		cout<<temp->data<<"ptr"<<temp->next<<" ";
		temp=temp->next;
	}
	cout<<endl;

}
};




int main()
{
  link k;
  k.insert(19);
  k.insert(29);
  k.insert(39);
  k.insert(49);
  k.insert(59);
  k.print();
  return 0;
}