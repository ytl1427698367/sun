#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	sleep(1000);
	char str1[] = "hello  beautiful gril";
	char str2[] = "#####################";
	int left = 0;
	int right = strlen(str1) - 1;
	while (left <= right)
	{
		
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n,str2");
		left++;
		right--;
	}
	system("pause");
}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a, b, c, flower;
//	
//	for (flower = 0; flower < 1000; flower++)
//	{
//		a = flower /100;//算出百分位
//		b = flower/10%10;//算出十分位
//		c = flower % 10;//算出个位
//		if (flower== a*a*a+b*b*b+c*c*c)
//		{
//			printf("%d\n", flower);
//		}
//	}
//	system("pause");
//	
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a;
//	int sn;
//	printf("输入一个数");
//	scanf("%d", &a);
//	
//	sn = a + a*a + a*a*a + a*a*a*a+ a*a*a*a*a;
//	printf("%d", sn);
//	system("pause");
//}