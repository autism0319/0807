#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺���в���ȡ���ػ�\n������>");
	scanf("%s",input);
	if(strcmp(input,"���в�") == 0)
	{
		system("shutdown -a");
	} 
	else
	{
		goto again;	
	} 
	return 0;
 } 
