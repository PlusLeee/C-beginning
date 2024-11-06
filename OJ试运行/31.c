//#include <stdio.h>
//
//int heshu(int i);
//
//int sum0(int i);
//
//int main()
//{
//	int a, b;
//	scanf("%d %d",&a,&b);
//
//	for (int i = a; i <= b; i++)
//	{
//		if (heshu(i))
//		{
//			if (sum0(i) >= a && sum0(i) <= b && sum0(sum0(i)) == i)
//			{
//				printf("%d %d\n", i, sum0(i));
//			}
//		}
//	}
//
//
//
//
//	return 0;
//}
//
//int heshu(int i)
//{
//	for (int j = 2; j * j <= i; j++)
//	{
//		if (i % j == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int sum0(int i)
//{
//	int sum = 0;
//	for (int j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			sum += j;
//		}
//	}
//	return sum;
//}