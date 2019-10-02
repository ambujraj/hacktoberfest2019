//Operations on a Circular Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head;
void insert(int val)
{
	struct node *temp,*new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=val;
	new->next=NULL;
	if(head==NULL)
	{
		head=new;
		new->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)
			temp=temp->next;
		temp->next=new;
		new->next=head;
	}
}
int delete(int x)
{	
	struct node *ptr,*preptr;
	if(head==NULL)	
		printf("List empty\n");
	else
	{
		ptr=head;
		while(ptr->data!=x&&ptr->next!=head)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		if(ptr==head&&ptr->data==x)
		{
			head=NULL;
			printf("%d was deleted from the list\n",x);
			free(ptr);
		}
		else if(ptr->data!=x)
			printf("Element not found\n");
		else
		{
			preptr->next=ptr->next;
			printf("%d was deleted from the list\n",x);
			free(ptr);
		}
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
		printf("List is empty\n");
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}
void main()
{
	int val,x,ch;
	head=NULL;
	do
	{
		printf("Enter the operation that you wish to perform on the circular linked list:\n1.Insert \n2.Delete \n3.Display \n4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the value to be inserted\n");
				scanf("%d",&val);
				insert(val);
				break;
			case 2:
				printf("Enter the value to be deleted\n");
				scanf("%d",&x);
				delete(x);
				break;
			case 3:
				display();
				break;
			default :
				if(ch!=4)
					printf("Invalid choice\n");
				break;
		}
	}while(ch!=4);
}

