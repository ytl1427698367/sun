////#include<stdio.h>
////#include<stdlib.h>
////void main()
////{
////	printf("hello world!\n");
////	system("pause");
////}
//////#include<stdio.h>
////#include<stdlib.h>
////void main()
////{
////	int a, b, c;/*定义abc为整形变量*/
////	a = 5; b = 6;/*给ab赋值*/
////	c = a*b;/*求面积*/
////	printf("a=%d,b=%d,c=%d\n", a, b, c);
////	system("pause");
////}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int ISmax(int a, int b, int c)
//{
//	int z;
//	if (a > b)
//	{
//		if (a > c)
//		{
//			z = a;
//		}
//		else
//		{
//			z = c;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			z = b;
//		}
//		else
//		{
//			z = c;
//		}
//	}
//	
//	printf("max is  = %d\n", z);
//}
//void main()
//{
//	int a, b, c, z;
//    scanf("%d %d %d", &a, &b, &c);
//    ISmax(a, b, c);
//    
//	system("pause");
////}
#include<stdio.h>
#include<stdlib.h>
int isprime(int x) {
	int num = 2;
	while (num < x){
		if (x % num == 0){
			return 0;
		}
		num = num + 1;
	}
	return 1;
}
int main(){
	int i = 100;
    while (i < 200){
	if(isprime(i) == 1)
    printf("%d\n",i);
    i = i + 1;
    }
    system("pause");
}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//void main()
//{
//	int x, max, i;
//	scanf("%d", &max);
//	i = 1;
//	do{
//		scanf("%d", &x);
//		if (x > max)max = x;
//		i = i + 1;
//	}
//    while (i < 9);
//    printf("max=%d", max);
//    system("pause");
//}
