#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"
void Init_Contact(struct Contact*ps)
{
	
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}
void Add_Contact(struct Contact*ps)
{
	if (ps->size == MAX_Con)
	{
		printf("通讯录已满\n");
	}
	else
	{
		printf("请输入名字：>");
		scanf("%s", ps->data[ps->size].name);//scanf("%d",&a)
		printf("请输入年龄：>");
		scanf("%d", ps->data[ps->size].age);
		printf("请输入电话：>");
		scanf("%s", ps->data[ps->size].tel);
		printf("请输入地址：>");
		scanf("%s", ps->data[ps->size].addr);   //!!!
		ps->size++;
	}
}
void Show_Contact(struct Contact*ps)
{
	if (ps->size == 0)
	{
		printf("通讯录是空的");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			//打印标题
			printf("-%s\t-%d\t-%s\t-%s\t", "名字", "年龄", "电话", "地址");
			printf("-%s\t-%d\t-%s\t-%s\t", ps->data[i].name
				                         , ps->data[i].age
				                         , ps->data[i].tel
				                         , ps->data[i].addr

				);
		}
	}
}
//void Del_Contact(struct Contact*ps);
//{
//
//
//}