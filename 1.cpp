#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

#define LEN sizeof(struct Node)

struct Node
{
	int a;
	struct Node *next;
};

Node *create(int a)
{
	Node* head;
	Node* p = NULL;
	Node* q = NULL;
	p=(Node *)malloc(LEN);
	head=(Node *)malloc(LEN);
	if(a==0)
	{
		head->next=NULL;
		return head;
	}
	cin>>p->a;
	head->next=p;
	p->next=NULL;
	int i;
	for(i=1;i<a;i++)
	{
		q=p;
		p=(Node *)malloc(LEN);
		cin>>p->a;
		p->next=q;
		head->next=p;
	}
	return head;
}

void hb(Node *&head1,Node *&head2)
{
	Node* p1 = NULL;
	Node* p2 = NULL;
	Node* p3 = NULL;
	Node* p4 = NULL;
	p1=head1->next;
	p2=head1;
	p3=head2->next;
	while(p1!=NULL&&p3!=NULL)
	{
		if(p1->a<p3->a||p1->a==p3->a)
		{
			p2=p1;
			p1=p1->next;
		}
		else
		{
			p2->next=p3;
			p2=p3;
			p4=p3->next;
			p3->next=p1;
			p3=p4;
		}
	}
	if(p1==NULL)
		p2->next=p3;
	else
	{
		p3=p2->next;
		if(p3!=p1)
		p3->next=p1;
	}
}

void print(Node *head)
{
	Node *p=head->next;
	cout<<"The current List is:"<<'\n';
	for(;p->next!=NULL;p=p->next)
		cout<<p->a<<',';
	cout<<p->a;
	system("pause");
}

int main()
{
	int a,b;
	Node* head1;
	Node* head2;
	cin>>a;
	head1=create(a);
	//print(head1);
	cin>>b;
	head2=create(b);
	//print(head2);
	hb(head1,head2);
	print(head1);
	return 0;
}
