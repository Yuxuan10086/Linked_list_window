#define Type bool
#include"link.h"
class Link_int: public Link
{
	public:
		Link_int(Type *val_list = NULL, int num = -1) //����ֵ������׵�ַ��Ԫ�ظ���,��ΪĬ��ֵ�򲻳�ʼ�� 
		{
			pHead = (Node *)malloc(sizeof(Node));
			pHead->pNext = NULL;
			len = 0;
			for(int i = 0; i < num; i++)
				append(*(val_list + i));
		}
};
