// linked list (ADA)
#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	node *next;
	int data;
};
node *start = NULL;
//add value in first node 
void AddFirst()
{
	node *temp;
	temp = new node;
	int n;
	cout<<"Enter your Value which are put in first node : ";
	cin>>n;
	if(temp == NULL)
	{
		cout<<"Node is not created please try agian !! "<<endl;
		return ;
	}
	temp->data = n ;
	temp->next = start;
	start = temp;
}
// Add at last 
void AddLast()
{
	node *temp,*ptr;
	int n;
	cout<<"Enter your value which are put in last node : ";
	cin>>n;
	temp = new node;
	if(temp==NULL)
	{
		cout<<"Node are not created : "<<endl;
		return ;
	}
	temp->data = n;
	temp->next = NULL;
	if(start == NULL)
	  start = temp;
	else
	{
		ptr = start;
		while(ptr->next!=NULL)
		   ptr = ptr->next;
		ptr->next = temp;
	}
}
//Add a node in a position 
void AddAtPosition()
{
	node *temp,*ptr;
	int n,p,i;
	cout<<"Enter your Position : ";
	cin>>p;
	if(start == NULL)
	{
		AddFirst();
		return ;
	}
	cout<<"Enter your node vlaue to add ";
	cin>>n;
	if(p == 1)
	{
		temp = new node;
		temp->data = n;
		temp->next=start;
		start = temp;
		return ;
	}
	ptr = start;
	for(i=1;i<=p-2;i++)
	{
		ptr = ptr->next;
		if(ptr == NULL)
		{
			AddLast();
			return ;
		}
	}
		temp = new node;
		temp->data = n;
		temp->next = ptr->next;
		ptr->next = temp;
}
//Display all the nodes 
void DisplayAll()
{
	node *temp ;
	temp = start;
	if(temp==NULL)
	{
	  cout<<"List is empty .... Create node first ! Thankyou ... "<<endl;
	  return ;
	}
	while(temp!=NULL)
	{
		cout<<"->"<<temp->data;
		temp = temp->next;
	}
	cout<<endl<<"========================"<<endl<<endl;
}
// Deleter at first
void DeleteAtFirst()
{
	node *temp;
	temp = start;
	if(temp == NULL)
	{
		cout<<"List is empty ...."<<endl;
		return ;
	}
	cout<<"Deleted Node is : "<<temp->data<<endl;
	start = temp->next;
	cout<<"====================="<<endl;
}
// Delete at last 
void DeleteAtLast()
{
	node *temp,*ptr;
	temp = start;
	if(temp == NULL)
	{
		cout<<"List is empty "<<endl;
		return ;
	}
	ptr = start;
	//traverse at last node
	while(ptr->next !=NULL)
	{
		ptr = ptr->next;
	}
	cout<<"Deleted Node is : "<<ptr->data<<endl;
	if(ptr==start)
	start = NULL;
	else
	ptr->next = NULL;
}
// main funtion 
int main()
{
	int op = 0;
	do
	{
//		system("cls"); // clear the screen 
		cout<<"1. Add node in start "<<endl;
		cout<<"2. Add node at Last "<<endl;
		cout<<"3. display "<<endl;
		cout<<"4. Add at position"<<endl;
		cout<<"5. Delete node first "<<endl;
		cout<<"6. Delete node last "<<endl;
		cout<<"7. Exit..."<<endl;
		cout<<"Enter your choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				AddFirst();
				break;
			case 2:
				AddLast();
				break;
			case 3:
				DisplayAll();
				break;
			case 4:
				 AddAtPosition();
				break;
			case 5:
				DeleteAtFirst();
				break;
			case 6:
				DeleteAtLast();
				break;
			case 7:
				cout<<"Thankyou !! "<<endl;
				exit(0);
				break;
			default:
				cout<<"Please Insert only from the given choice .... try again"<<endl;
		}
	}while(op!=7);
}
