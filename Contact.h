#include<stdio.h>
#define MAX_Con 1000
#define MAX_NAME 20
#define MAX_TEL  30
#define MAX_ADDR 50
#include<string.h>
//ÿ���˵���Ϣ
struct peopleifo
{
	char name[MAX_NAME];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
//ͨѶ¼
struct Contact
{
	struct peopleifo data[MAX_Con];
	int size;
}Con;
void Init_Contact(struct Contact*ps);//��ʼ������
void Add_Contact(struct Contact*ps);//����ͨѶ¼��Ա��Ϣ
void Del_Contact(struct Contact*ps);
void Show_Contact(struct Contact*ps);