
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[6] = { 1, 2, 3, 4, 9, 8 };
	int b[6] = { 2, 5, 6, 5, 3, 4 };
	int i=0;
	
	while (i < 6)
	{
		int tmpe;
		tmpe = a[i];
		a[i] = b[i];
		b[i] = tmpe;
          i++;
	}
	 i = 0;
	printf("a[i]=");
	while (i <= 5)
	{
	printf("%d ",a[i]); 
	printf("\n");
	printf("b[i]=");
	i = 0;
	while (i <= 5)
	{
		printf("%d ", b[i]);
		i = i + 1;
	}
	printf("\n");
	system("pause");
	
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int count;
	double sum = 0;
	for (count = 1; count <= 100; count++)
	{
		sum = sum + (pow(-1, count + 1)) / count;
	}
		printf("sum = %f\n", sum);
	system("pause");
}
int main()
{
	double num1,num2;
	double sum1 = 0;
	double sum2 = 0;
	double sum = 0;
	double a = 0;
	for (num1 = 1; num1 <= 99; num1 += 2)
	{
		a = 1 / num1;
		sum1 = sum1 +a;
		printf("%f\n", sum1);
	}
	printf("%f\n", sum1);

	for (num2 = 2; num2 <= 100; num2 += 2)
	0; num2 += 2)
	{
		sum2 = sum2 + 1 / num2;//偶数分之一之和
		}
	sum = sum1-sum2;//总和为sum{
		sum2 = sum2 + 1 / num2;
	}

	sum = sum1 - sum2;
	printf("sum = %f\n", sum);
	system("pause");
}




#include<stdio.h>
#include<stdlib.h>
int main()
{
	double sum1 = 0, sum2 = 0, sum = 0, num1 = 1, num2 = 2; 
	for (num1 = 1; num1 <= 99; num1 += 2)
	{
		sum1 = sum1 + 1 / num1;//奇数分之一之和
	}
		
	for (num2 = 2; num2 <= 101减去sum2
	printf("sum=%f/n", sum);//输出sum
	system("pause");
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, times = 0;//定义一个变量num和变量times
	for (num = 1; num <= 100; num += 1)

	{
		if (num % 10 == 9)
		{
			times = times + 1;//个位有9的次数
		}
		if (num / 10 == 9)
		{
			times = times + 1;//十位有9的次数
		}
	}

	printf("times=%d", times);
	system("pause");
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, times = 0;//定义变量num和times
	for (num = 1; num <= 100; num=num+1)
	{
		if (num % 10 == 9)//个位数有9次数
		{
			times = times + 1;
		}
			if (num / 10 == 9)//十位有9的次数
			{
		
			times = times + 1;
	}
			
		}
		printf("times = %d",times);
			system("pause");
	}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, temp;
	printf("请输入两个数值:");
	scanf("%d%d", &a, &b);
    temp= a;
	 a= b;
	b= temp;
	printf("a=%d b=%d", a, b);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	printf("输入两个数");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%db=%d", a, b);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, max = 0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &a);
		if (i == 1 || max<a)
			max = a;
		
	}
	printf("max=%d", max);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() 
{
	 double num1, num2, num3,temp;
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	if (num2 > num1)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
		if (num3 > num1)
		{
			temp = num1;
			num1 = num3;
			num3 = temp;
		}
			if (num2 < num3)
			{
				temp = num2;
				num2 = num3;
				num3 = temp;
			}
		
			


	printf("%f %f %f", num1, num2, num3);
	system("pause");
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, i;
	printf("请输入两个数");
	scanf("%d  %d", &a, &b);
	i = 1;
	int max = 0;
	while(i<=a&&i<=b){
		if (a%i == 0 && b%i == 0)
			max = i;
		i++;
	}
	printf("%d\n", max);
	
	if (a > b)
	{

		for (i = 1; i <= b; i++)
		{
			b%i == 0 && a%i == 0;

		}
	}
			printf("i=%d", i);*/
			system("pause");
			return 0;
		
	}
	