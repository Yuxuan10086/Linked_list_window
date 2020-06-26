#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<string>
using namespace std;

/*
ʹ����������ʵ�ֶ�̬����
������Ϊstringʱ��������bug,��δ��� 
���Ŀǰֻ֧��int,float,double,char,bool 

��д���ں�������ʱӦ�����ɶ�Ӧ��������ĺ���д�ڸ�ͷ�ļ����·�
������#define�Ḳ�� 
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

Link::Link(Type *val_list = NULL, int num = -1) //����ֵ������׵�ַ��Ԫ�ظ���,��ΪĬ��ֵ�򲻳�ʼ�� 
{
	pHead = (Node *)malloc(sizeof(Node));
	pHead->pNext = NULL;
	len = 0;
	for(int i = 0; i < num; i++)
		append(*(val_list + i));
}

Node* Link::get_ad(int pos) //�����1��ʼ��Ԫ����ţ�����pos����ӦԪ������ĵ�ַ 
{
	if(pos > len)
		printf("Խ��"); 
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

Type* Link::find(int pos = -1) //posΪĬ��ֵ-1ʱ���ش洢��������ֵ�������ͷָ��,���򷵻ظ�λ��Ԫ��ֵ��ָ��(����ָ�����������data 
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

void Link::shortt(bool flag = true)//ʹ��ð������,��flagΪĬ��ֵtrueʱΪ��С���� 
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
