#define _CRT_SECURE_NO_WARNINGS
#include"Contact.h"
//ͨѶ¼���� 1.���ӣ�2.ɾ����3.���ң�4.�޸ģ�5.��ӡ��0.�˳�
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
		printf("������ѡ��Ĺ�����:>");
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
				printf("�˳�ͨѶ¼\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}