
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*�žų˷���
int main()
{
	int n;
	scanf_s("%d", &n);
	int i,j;
	i = 1;
	while (i <= n) 
	{
		j = 1;
		while (j <= i)
		{
			printf("%d*%d=%d", j, i, i * j);
			if(i*j < 10)
			{
				printf("    ");
			}
			else
			{
				printf("   ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/

/*ͳ���������
#include <stdio.h>
int main()
{
	int m, n;
	int i;
	int cut = 0;
	int sum = 0;
	scanf_s("%d %d", &m, &n);
	if (m == 1) 
	{
		m = 2;
	}
	for(i = m;i<=n; i++)
	{
		int isPrime = 1;
		int k;
		for (k = 2; k < i - 1; k++) 
		{
			if (i % k == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			cut++;
			sum += i;
		}
	}

	printf("%d %d\n", cut, sum);
	return 0;

}*/


/*������Ϸ
#include <stdio.h>
int main()
{
	int number, n;
	int inp;
	int finished = 0;
	int cnt = 0;
	scanf_s("%d %d", &number, &n);
	do 
	{
		scanf_s("%d %d", &inp);
		cnt++;
		if (inp < 0)
		{
			printf("Game Over\n");
			finished = 1;
		}
		else if (inp > number)
		{
			printf("too big\n");
		}
		else if (inp < number)
		{
			printf("too small\n");
		}
		else
		{
			if (cnt == 1) 
			{
				printf("bingo!\n");
			}
			else if (cnt <= 3)
			{
				printf("lucky you!\n");
			}
			finished = 1;
		}
		if(cnt==n)
		{
			if (!finished) 
			{
				printf("game over\n");
				finished = 1;
			}
		}
	} 
	while (!finished);
	return 0;
}*/


//define �����
//#define ADD(X,Y) (X+Y)
//int main()
//{
//	printf("%d\n",4* ADD(2, 3));
//
//	return 0;
//
//}

//ָ��
//int main()
//{
//	int a = 10;
//	printf("%p\n" ,&a);//%pר��������ӡ��ַ
//	int*pa = &a;//pa��������ŵ�ַ�ģ�����ָ�����
//
//	//*   ˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
// }

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//* �����ò�����*pa����ͨ��pa�еĵ�ַ���ҵ�a
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float *));
//	return 0;
//}


//�ṹ��
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = {"����",20,88.99};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1 %s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	struct Stu * ps = &s;
//	printf("2 %s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);
//
//	printf("3 %s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ���ָ��->��Ա������
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i; i <= 100; i++)
//		//if (i % 2 == 1)����if��Ϊi+=2
//			printf("%d ",i);
//
//		return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//��whileѭ���У�break����������ֹѭ��
//				continue������������ѭ��continue��Ĵ��룬ֱ��ȥ�жϲ��֡�

