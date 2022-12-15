#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{ 
//	int a = 0;
//	char password[10] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);//空格和回车都会影响后续输入，所以要加getchar 或者是while循环
//	while (getchar() != '\n');
//	{
//		;
//	}
//	printf("是否要进行登录Y/N");
//	a = getchar();
//	if (a == "Y")
//		printf("账号正在登录，请稍后。。。。");
//	else
//		printf("账号已经取消登录");
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

//利用for循环打印1-10
int main()
{ 
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		printf("%d ", a);
	}
	return 0;
}