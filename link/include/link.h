#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string>
using namespace std;

/*
使用条件编译实现动态类型
当类型为string时会有严重bug,尚未解决 
因此目前只支持int,float,double,char,bool 

编写窗口函数程序时应将生成对应类型链表的函数写于该头文件正下方
否则多个#define会覆盖 
*/


#ifdef Type
struct Node
{
	Type data;
	Node *pNext;
};
class Link
{
	public:
		Link(Type *val_list, int num);
		int len;
		Node* get_ad(int pos);
		
		void append(Type val);
		void push(Type val);
		void insert(Type val, int pos);
		void show();
		void del(int pos);
		void transpose();
		Type* find(int pos);
		void swap(int pos1, int pos2);
		void shortt(bool flag);
		void change(Type val, int pos);
		
	protected:
		Node *pHead;
};

void Link::append(Type val)
{
	Node *tial;
	Node *new_node = (Node *)malloc(sizeof(Node));
	if(len == 0)
		tial = pHead;
	else
		tial = get_ad(len);
	tial->pNext = new_node;
	new_node->data = val;
	new_node->pNext = NULL;
	len++;
	
}

Link::Link(Type *val_list = NULL, int num = -1) //传入值数组的首地址与元素个数,若为默认值则不初始化 
{
	pHead = (Node *)malloc(sizeof(Node));
	pHead->pNext = NULL;
	len = 0;
	for(int i = 0; i < num; i++)
		append(*(val_list + i));
}

Node* Link::get_ad(int pos) //传入从1开始的元素序号，返回pos所对应元素整体的地址 
{
	if(pos > len)
		printf("越界"); 
	Node *res;
	res = pHead->pNext;
	for(int i = 0; i < pos - 1; i++)
		res = res->pNext;
	return res; 
}

void Link::show()
{
	//Node *now = pHead->pNext;
	for(int i = 1; i <= len; i++)
		cout<<get_ad(i)->data<<' ';
}

void Link::push(Type val)
{
	Node *new_node = (Node *)malloc(sizeof(Node));
	new_node->data = val;
	new_node->pNext = pHead->pNext;
	pHead->pNext = new_node;
	len++;
} 
void Link::insert(Type val, int pos)
{
	if(pos == 1)
		push(val);
	else
	{
		Node *new_node = (Node *)malloc(sizeof(Node)), *pLast;
		
		pLast = get_ad(pos - 1);
		new_node->data = val;
		new_node->pNext = pLast->pNext;
		pLast->pNext = new_node;
		len++;
	}
}

void Link::del(int pos)
{
	Node *pNode = get_ad(pos - 1);
	pNode->pNext = pNode->pNext->pNext;
	len--;
}
void Link::transpose()
{
	int len_now = len;
	Type val;
	for(int i = 2; i <= len_now; i++)
	{
		val = get_ad(i)->data;
		push(val);
		del(i + 1);
	}
}

Type* Link::find(int pos = -1) //pos为默认值-1时返回存储整个链表值的数组的头指针,否则返回该位置元素值的指针(并非指向链表结点里的data 
{
	Type *res, val = get_ad(pos)->data;
	if(pos == -1)
	{
		res = (Type *)malloc(sizeof(int) * len);
		for(int i = 0; i < len; i++)
			*(res + i) = get_ad(i + 1)->data;
	}
	else
		res = &val;
	return res;
} 

void Link::swap(int pos1, int pos2)
{
	if(pos1 > pos2)
	{
		int t;
		t = pos1;
		pos1 = pos2;
		pos2 = t;
	}
	insert(*find(pos1), pos2);
	del(pos1);
	insert(*find(pos2), pos1);
	del(pos2 + 1);
}

void Link::shortt(bool flag = true)//使用冒泡排序,当flag为默认值true时为从小到大 
{
	for(int i = 1; i <= len; i++)
		for(int i = 1; i < len; i++)
			if(*find(i) < *find(i + 1))
				swap(i, i + 1); 
	if(flag)
		transpose();
}

void Link::change(Type val, int pos)
{
	get_ad(pos)->data = val;
} 
#endif
