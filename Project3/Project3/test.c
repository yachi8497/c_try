//>>p1.4
//#include <stdio.h>
//int main()
//{
//	printf("***************\n");
//	printf("  Hello World! \n");
//	printf("***************\n");
//	return 0;
//}
//>>p1.5
//#include <stdio.h>
//int main()
//{
//	printf("*****\n");
//	printf("  *****\n");
//	printf("    *****\n");
//	printf("      *****\n");
//	return 0;
//}
//>>p1.6
//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	int d = 0;
//	scanf("%d,%d,%d",&a,&b,&c);//1.scanf的输入格式错误, 2.输入时需注意是否有,号等地方
//	//有问题待细看
//	//if (a > b)
//	//{
//	//	//d = a;
//	//	{
//	//		if (a > c)
//	//		{ 
//	//			d = a;
//	//			printf("最大值是a:%d", d);
//	//		}
//	//		else
//	//		{
//	//			d = c;
//	//			printf("最大值是c:%d", d);
//	//		}
//	//	}
//	//}
//	//else
//	//{
//	//	//d = b;
//	//	if (b > c)
//	//	{
//	//		d = b;
//	//		printf("最大值是b:%d", d);
//	//	}
//	//}
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			d = a;
//			printf("最大值是%d\n",d);
//		}
//
//	}
//	else
//	{
//		if (b > c)
//		{
//			d = b;
//			printf("最大值是%d\n", d);
//		}
//		else
//		{
//			d = c;
//			printf("最大值是%d\n", d);
//		}
//	}
//	return 0;
//}

//>>P3.1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float r = 0.07;
//	int n = 10;
//	float p = 0;
//	//p = pow(n, 1 + r);//1.错误理解pow函数的作用
//	p = pow(1+r, n);
//	printf("%f\n",p);
//	return 0;
//}
//>>P3.2
//#include <stdio.h>
//int main()
//{
//	float r1 = 0.03;
//	int R1 = 5;
//	float P1 = 0;
//	P1 = 1000 * (1 + R1 * r1);
//	printf("一次性存5年期的本息和%f\n",P1);
//
//	return 0;
//}