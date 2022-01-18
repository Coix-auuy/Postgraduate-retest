#include<bits/stdc++.h>
using namespace std;
// 双向链表带头结点 
typedef int ElemType;
typedef struct node{
	struct node *next, *pre;
	ElemType data;
}*LinkList, ListNode;
void init(LinkList &L)
{
	L = new ListNode();
	L->next = L->pre = L;
}
void print_list(LinkList L)
{
	ListNode *p = L->next;
	while(p != L)
	{
		cout<<p->data<<' ';
		p = p->next;
	}
	cout<<endl;
}
void push_front(LinkList &L, ElemType e)
{
	ListNode *p = new ListNode();
	p->data = e;
	p->next = L->next;
	p->pre = L;
	L->next = p;
	p->next->pre = p;
	L->data++;
}
void push_back(LinkList &L, ElemType e)
{
	ListNode *p = new ListNode();
	p->data = e;
	p->next = L;
	p->pre = L->pre;
	L->pre->next = p;
	L->pre = p;
	L->data++;
}
ElemType front(LinkList L)
{
	return L->next->data;
}
ElemType back(LinkList L)
{
	return L->pre->data;
}
void reverse(LinkList &L, int l, int r)
{
	ListNode *p = L, *q = L;
	for(int i = 1; i <= l; i++)
		p = p->next;
	for(int i = 1; i <= r; i++)
		q = q->next;
	for(int i = 1; i <= (r - l + 1) / 2; i++)
	{
		swap(p->data, q->data);
		p = p->next;
		q = q->pre;
	}
}
void pop_front(LinkList &L)
{
	ListNode *q = L->next;
	L->next->next->pre = L;
	L->next = L->next->next;
	delete q;
	L->data--;
}
void pop_back(LinkList &L)
{
	ListNode *q = L->pre;
	q->pre->next = L;
	L->pre = q->pre;
	delete q;
	L->data--;
}
int main()
{
	std::ios::sync_with_stdio(false);
	int n, l, r;
	LinkList L;
	init(L);
	ElemType e;
	cin>>n>>l>>r;
	L->data = 0;
	for(int i = 0; i < n; i++)
	{
		cin>>e;
		push_back(L, e);
	}
	reverse(L, l, r);
	print_list(L);
	return 0;
}
