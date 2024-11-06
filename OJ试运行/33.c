//#include <stdio.h>
//
//int main()
//{
//	int m;
//	scanf("%d",&m);
//	int check = 0;
//	for (int i = m - 1; i > 1; i--)
//	{
//		if (sushu(i))
//		{
//			printf("%6d",i);
//			check++;
//		}
//		if (check == 10)
//		{
//			break;
//		}
//	}
//
//
//
//
//
//
//
//	return 0;
//}
//
//int sushu(int i)
//{
//	for (int j = 2; j * j <= i; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}