#define Type bool
#include"link.h"
class Link_int: public Link
{
	public:
		Link_int(Type *val_list = NULL, int num = -1) //传入值数组的首地址与元素个数,若为默认值则不初始化 
		{
			pHead = (Node *)malloc(sizeof(Node));
			pHead->pNext = NULL;
			len = 0;
			for(int i = 0; i < num; i++)
				append(*(val_list + i));
		}
};
