#include<stdio.h>
#define MAX_Con 1000
#define MAX_NAME 20
#define MAX_TEL  30
#define MAX_ADDR 50
#include<string.h>
//每个人的信息
struct peopleifo
{
	char name[MAX_NAME];
	int age;
	char tel[MAX_TEL];
	char addr[MAX_ADDR];
};
//通讯录
struct Contact
{
	struct peopleifo data[MAX_Con];
	int size;
}Con;
void Init_Contact(struct Contact*ps);//初始化声明
void Add_Contact(struct Contact*ps);//增加通讯录人员信息
void Del_Contact(struct Contact*ps);
void Show_Contact(struct Contact*ps);