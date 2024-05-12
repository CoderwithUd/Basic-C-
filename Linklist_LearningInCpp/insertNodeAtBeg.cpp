#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* link;
};
void beg(node **head,int data)
{
	node* n=new node();
	n->data=data;
	n->link=*head;
	*head=n;
	cout<<"Succefully insert the node at begin."<<endl;
}
 void end(node **head ,int data)
 {
	node* n=new node();
	n->data=data;
	n->link=NULL;
	if(*head==NULL)
	{
		*head=n;
	}
    node* ptr=*head;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
	ptr->link=n;
	n->link=NULL;
	cout<<"Insert node last."<<endl;
 }
 void print(node* node)
 {
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->link;
	}
	cout<<endl;
 }
 int main()
 {
	node* head=NULL;
	beg(&head,10);
	beg(&head,20);
	end(&head,30);
	end(&head,40);
	end(&head,50);
	beg(&head,60);
	end(&head,70);
	end(&head,90);
	beg(&head,80);
	end(&head,100);

	print(head);
	return 0;
 }