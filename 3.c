#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//������ѭ��
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		else
//			printf("%d", i);
//	}
//	return 0;
//}
//int main()//��ѭ������Ϊ��û���ļ����Ծͷ��ص���whileѭ��
//{
//	int i = 0;
//	while (i<=10)
//	{
//		if (i <= 5)
//			continue;
//		i++;
//	}
//	return 0;
//}




//��ӡ100�ι���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)
//			printf("haha\n");
//	}
//	return 0;
//}



//��ӡ10��haha
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (; b < 10; b++)//b�ڵ�һ��ѭ�������б�����Ϊ��9���޷������˺�����ѭ��
//			printf("haha\n");
//	}
//	return 0;
//}


//�ܽ᣺forѭ���еĳ�ʼ�����жϣ�������Ҫ���ʡ�ԡ�

//����do whlie ѭ����ӡ1-10.
//int main()
//{   
//	int i = 1;
//do
//    {
//	printf("%d ",i);
//	i++;
//     } 
//while (i <= 10);
//
//	return 0;
//}

//n�׳˵�����
//int main()
//{
//	int c = 0;  
//	int b = 0;
//	int a = 0;
//	int d = 1;
//	scanf("%d",& a);
//	do
//	{
//		b = a--;
//		
//	} 
//	while (b >1);
//	c = d*b;
//	printf("%d ", c);
//	return 0;
//}//��һ��д�ģ����ᡣ

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//
//	}
//	printf("%d", ret);
//	return 0;
//}