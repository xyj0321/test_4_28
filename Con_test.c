#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"
//通讯录包括 1.增加；2.删除；3.查找；4.修改；5.打印；0.退出
enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
};
void menu()
{
	printf("*****O.Exit  *************************\n");
	printf("*****1.Add   *********2.Delate   *****\n");
	printf("*****3.Search*********4.Modify   *****\n");
	printf("*****5.Show  *************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();	
		printf("请输入选择的功能数:>");
		scanf("%d", &input);
		switch (input)
		{
			case ADD:
				Add_Contact(&Con);
				break;
			case DEL:
				//Del_Contact(&Con);
				break;
			case SEARCH:
				//Ser_Contact();
				break;
			case MODIFY:
				//Mod_Contact();
				break;
			case SHOW:
				Show_Contact(&Con);
				break;
			case EXIT:
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
		}
	} while (input);
	return 0;
}