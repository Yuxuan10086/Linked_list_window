#define Type float
#include"link.h"
class Link_float: public Link
{
	public:
		Link_float(Type *val_list = NULL, int num = -1) //����ֵ������׵�ַ��Ԫ�ظ���,��ΪĬ��ֵ�򲻳�ʼ�� 
		{
			pHead = (Node *)malloc(sizeof(Node));
			pHead->pNext = NULL;
			len = 0;
			for(int i = 0; i < num; i++)
				append(*(val_list + i));
		}
};
