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
//	scanf("%d,%d,%d",&a,&b,&c);//1.scanf�������ʽ����, 2.����ʱ��ע���Ƿ���,�ŵȵط�
//	//�������ϸ��
//	//if (a > b)
//	//{
//	//	//d = a;
//	//	{
//	//		if (a > c)
//	//		{ 
//	//			d = a;
//	//			printf("���ֵ��a:%d", d);
//	//		}
//	//		else
//	//		{
//	//			d = c;
//	//			printf("���ֵ��c:%d", d);
//	//		}
//	//	}
//	//}
//	//else
//	//{
//	//	//d = b;
//	//	if (b > c)
//	//	{
//	//		d = b;
//	//		printf("���ֵ��b:%d", d);
//	//	}
//	//}
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			d = a;
//			printf("���ֵ��%d\n",d);
//		}
//
//	}
//	else
//	{
//		if (b > c)
//		{
//			d = b;
//			printf("���ֵ��%d\n", d);
//		}
//		else
//		{
//			d = c;
//			printf("���ֵ��%d\n", d);
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
//	//p = pow(n, 1 + r);//1.�������pow����������
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
//	printf("һ���Դ�5���ڵı�Ϣ��%f\n",P1);
//
//	return 0;
//}