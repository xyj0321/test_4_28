#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
////ģ��ʵ��strncpy
//char* my_strcpy(char*dest, const char*src)
//{
//	assert(dest&&src);
//	char*ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return (ret);
//}
//int main()
//{
//	char arr1[10] = "adncfk";
//	char arr2[20] = "akdncjfkd";
//	char*ret = my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//ģ��ʵ��strncat
char* my_strcat(char*dest, const char*src)
{
	char*ret = dest;
	//�ҵ���\0��
	while (*dest != '\0')
	{
		dest++;
	}
	//׷��
	while (*dest++ = *src++)
	{
		;
	}
	return(ret);
}
int main()
{
	char str1[20] = "advfg";//char[] str1="advfg"��ͬ
	char str2[10] = "sfg";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}