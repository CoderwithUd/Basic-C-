#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* link;
};

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
	end(&head,10);
	end(&head,20);
	end(&head,30);
	end(&head,40);
	end(&head,50);
	end(&head,60);
	end(&head,70);
	end(&head,90);
	end(&head,80);
	end(&head,100);

	print(head);
	return 0;
 }