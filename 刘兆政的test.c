#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()//������-��������
//{
//	printf("hello world\n");
    //return 0;//����
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return;
//
//
//
//	
//}


//#include <stdio.h>
//int main()
//{  
//	printf("hh hhh");
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf_s("%d%d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	char a[] = "abc";
//	//"abc"�ַ�������--"a", "b", "c" ,"\0"(����)--"\0"���ַ����Ľ�����־
//	//
//	char b[] = { 'a', 'b', 'c'};
//	printf("%d\n", strlen(a));
//	printf("%d\n", strlen(b));
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("asdfjkkl\32"));
//
//	//32 -- 32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ�� ��Ӧ���ַ�
//	//32 -- > 10����26 ->��ΪASCII��ֵ������ַ�| ת���ַ���һ���ַ�
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int input = 0;
//	printf("��Ҫ����c���Ե�ѧϰ��");
//	printf("���Ŭ��ѧϰ����������?��1/0)>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("good offer\n");
//	}
//
//    else
//	{
//		printf("bad job\n");
//	}
//	system("pause");
//	return 0;


//#include <stdio.h>
//int main()
//{
//	int line=0;
//	printf("����c���Ե�ѧϰ\n");
//	while(line<1000)
//	{     printf("��һ�д���\n");
//	      line++;
//	}
//
//	printf("�ù���\n");
//    return 0;
//}

//#include <stdio.h>
//struct book
//{
//	char name[20];
//	short vlaue;
//
//};
//int main()
//{
//	struct book shu = { "c���Գ������", 55 };
//	printf("����:%s\n", shu.name);
//	printf("�۸�:%dԪ\n", shu.vlaue);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int age = 20;
//	if (age > 18)
//		printf("������\n");
//	else
//		printf("δ����\n");
//	return 0;
//}



//#include <stdio.h>
//
//int main(void)
//
//{
//
//	float a, x, y;
//
//	for (y = 1.5f; y>-1.5f; y -= 0.1f)
//
//	{
//
//		for (x = -1.5f; x<1.5f; x += 0.05f)
//
//		{
//
//			a = x*x + y*y - 1;
//
//			char ch = a*a*a - x*x*y*y*y <= 0.0f ? '*' : ' ';
//
//			putchar(ch);
//
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//
//}


//#include <stdio.h>
//#include <math.h>
//#include <windows.h>
//#include <tchar.h>
//
//float f(float x, float y, float z) {
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//}
//
//float h(float x, float z) {
//	for (float y = 1.0f; y >= 0.0f; y -= 0.001f)
//	if (f(x, y, z) <= 0.0f)
//		return y;
//	return 0.0f;
//}
//
//int main() {
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//	_TCHAR buffer[25][80] = { _T(' ') };
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//
//	for (float t = 0.0f;; t += 0.1f) {
//		int sy = 0;
//		float s = sinf(t);
//		float a = s * s * s * s * 0.2f;
//		for (float z = 1.3f; z > -1.2f; z -= 0.1f) {
//			_TCHAR* p = &buffer[sy++][0];
//			float tz = z * (1.2f - a);
//			for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//				float tx = x * (1.2f + a);
//				float v = f(tx, 0.0f, tz);
//				if (v <= 0.0f) {
//					float y0 = h(tx, tz);
//					float ny = 0.01f;
//					float nx = h(tx + ny, tz) - y0;
//					float nz = h(tx, tz + ny) - y0;
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//					*p++ = ramp[(int)(d * 5.0f)];
//				}
//				else
//					*p++ = ' ';
//			}
//		}
//
//		for (sy = 0; sy < 25; sy++) {
//			COORD coord = { 0, sy };
//			SetConsoleCursorPosition(o, coord);
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//		}
//		Sleep(33);
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int a = 1;
//	while (a<=100)
//	{ 
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//
//
//	}
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	        printf("����һ");
//	case 2:
//	        printf("���ڶ�");
//	case 3:
//		    printf("������");
//
//	}
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int mun = 0;
//	scanf("%d", &mun);
//	if (mun % 2 == 0)
//		printf("�������ż��");
//	else
//		printf("�����������");
//
//	return 0;
//}

