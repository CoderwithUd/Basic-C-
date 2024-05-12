#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	/* data */
	int data;
	struct node*link;
	
};
struct list
{
	/* data */
	struct  node*start;	
};
int insert_node(struct list*lp,int item)
{
	struct node*ptr;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	{
		lp->start=newnode;
		printf("\n Insert the node in linklist is done...");
		return 0;
	}
	ptr=lp->start;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
		ptr->link=newnode;
		printf("\n Insert succusefully...");
	}
	return 0;
}


int  display(struct list l){
	struct node*ptr;
	if(l.start==NULL)
	{
		printf("\n Underflow condition ...");
		return 0;
	}
	ptr=l.start;
	while(ptr!=NULL)
	{
		printf("%d \n",ptr->data);
		ptr=ptr->link;
	}
	return 0;

}



void main()
{
struct list l;
l.start=NULL;
insert_node(&l,10);
insert_node(&l,20);
insert_node(&l,30);

	printf("\n hello I'am Uday Dewangan Who are you ....");
	display(l);

	getch();
}

/*
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct list
{
	struct node *start;
};

int insert_node(struct list *lp, int item)
{
	struct node *ptr;
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = item;
	newnode->link = NULL;

	if(lp->start == NULL)
	{
		lp->start = newnode;
		printf("\n Insert the node in linked list is done...");
		return 0;
	}

	ptr = lp->start;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = newnode;
	printf("\n Insert successfully...");

	return 0;
}

int display(struct list l)
{
	struct node *ptr;

	if(l.start == NULL)
	{
		printf("\n Underflow condition...");
		return 0;
	}

	ptr = l.start;
	while(ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->link;
	}

	return 0;
}

int main()
{
	struct list l;
	l.start = NULL;

	insert_node(&l, 10);
	insert_node(&l, 20);
	insert_node(&l, 30);

	printf("\n Hello, I'm Uday Dewangan. Who are you? ...\n");
	display(l);

	return 0;
}
*/