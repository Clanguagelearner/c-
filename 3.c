#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()//正常的循环
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
//int main()//死循环，因为还没来的及调试就返回到了while循环
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




//打印100次哈哈
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



//打印10此haha
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 10; a++)
//	{
//		for (; b < 10; b++)//b在第一次循环过程中被调整为了9，无法进行了后续的循环
//			printf("haha\n");
//	}
//	return 0;
//}


//总结：for循环中的初始化，判断，调整不要随便省略。

//利用do whlie 循环打印1-10.
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

//n阶乘的运算
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
//}//第一次写的，不会。

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