#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{ 
//	int a = 0;
//	char password[10] = { 0 };
//	printf("����������");
//	scanf("%s", password);//�ո�ͻس�����Ӱ��������룬����Ҫ��getchar ������whileѭ��
//	while (getchar() != '\n');
//	{
//		;
//	}
//	printf("�Ƿ�Ҫ���е�¼Y/N");
//	a = getchar();
//	if (a == "Y")
//		printf("�˺����ڵ�¼�����Ժ󡣡�����");
//	else
//		printf("�˺��Ѿ�ȡ����¼");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//	{
//		if (a<"0" || a>"9")
//			continue;
//	}
//	putchar(a);
//	return 0;
//}

//����forѭ����ӡ1-10
int main()
{ 
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		printf("%d ", a);
	}
	return 0;
}