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
		printf("ͨѶ¼����\n");
	}
	else
	{
		printf("���������֣�>");
		scanf("%s", ps->data[ps->size].name);//scanf("%d",&a)
		printf("���������䣺>");
		scanf("%d", ps->data[ps->size].age);
		printf("������绰��>");
		scanf("%s", ps->data[ps->size].tel);
		printf("�������ַ��>");
		scanf("%s", ps->data[ps->size].addr);   //!!!
		ps->size++;
	}
}
void Show_Contact(struct Contact*ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼�ǿյ�");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			//��ӡ����
			printf("-%s\t-%d\t-%s\t-%s\t", "����", "����", "�绰", "��ַ");
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