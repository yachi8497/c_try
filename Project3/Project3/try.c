//#include <stdio.h>
//
//int main()
//{
//	char* ps = "hello bit";
//	char arr[] = "hello bit";
//	printf("%c\n", *ps);//%c表示字符型格式符
//	printf("%s\n", ps);//%s表示字符串型格式符
//	printf("%s\n",arr);
//	return 0;
//}
// 
// >>熟悉 & | ^
//#include <stdio.h>
//int main()
//{
//	int n1 = 1;
//	int n2 = 2;
//	printf("n1 & n2 = %d \n",(n1 & n2));//0
//	printf("n1 | n2 = %d \n", (n1 | n2));//3
//	printf("n1 ^ n2 = %d \n", (n1 ^ n2));//3
//
//}
//>>不创建第三个变量,实现两个数的交换
//#include <stdio.h>
//int main()
//{
//	int n1 = 1;
//	int n2 = 2;
//	int n3 = 0;
//	n3 = n1 ^ n2;
//	n2 = n3 ^ n2;
//	n1 = n3 ^ n1;
//	printf("n1=1:%d\n",n1);//2
//	printf("n2=2:%d\n",n2);//1
//	return 0;
//}
// >>求一个整数存储在内存中的二进制中1的个数
//#include <stdio.h>
//int main()
//{
//	int n1 = -1;
//	int i = 0;
//	int cou = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n1 & (1 << i))
//		{
//			cou++;
//		}
//	}
//	printf("1的个数:%d\n",cou);
//	return 0;
//}
// >>验证逻辑与和或的特点
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n",a,b,c,d);
//	return 0;
//}
// >>三目操作符
//#include <stdio.h>
//int main()
//{
//	int a = 5;
//	int b = 6;
//	printf("两者比较的最大值是:%d\n", a > b ? a : b);
//	return 0;
//}
//
// >>比较char和int指针类型的区别
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	char* p1 = &n;
//	int* p2 = &n;
//	printf("%p\n",p1);
//	printf("%p\n", p1+1);
//	printf("%p\n",p2);
//	printf("%p\n", p2+1);
//	return 0;
//}
// >>区别指针与数组之间的关系
//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int* p = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("i的值=%d, arr[%d]=%d *p=%d &arr[%d]=%p p=%p\n", i, i, arr[i],*(p+i),i,&arr[i],p + i);;
//	}
//	return 0;
//}
// >>关于二级指针使用
//#include <stdio.h>
//int main()
//{
//	int a = 20;
//	int * pa = &a;//初始化pa指针
//	//int * pb = pa;//将pa指针地址传给pb
//	//*pb = 30;//解引用pb,既获取a的地址,再将其赋值
//	int ** ppa = &pa;
//	**ppa = 40;
//	printf("%d",a);
//	return 0;
//}

#include <stdio.h>
struct s
{
	char name[23];
	int n;
}s1 = { "lisi",10};
void print1(struct s s1)
{
	printf("name = %s   n = %d\n", s1.name, s1.n);
}
void print2(struct s *ps)
{
	printf("name = %s   n = %d\n",(*ps).name,(*ps).n);
	printf("name = %s   n = %d\n", ps->name, ps->n);
}
int main()
{
	print1(s1);
	print2(&s1);
	return 0;
}
