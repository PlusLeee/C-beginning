//#include <stdio.h>
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		n = n * 2 - 1;
//		int zhong = (n + 1) / 2;
//		for (int i = 1; i <= zhong; i++)
//		{
//			for (int j = 1; j <= zhong - i; j++)
//			{
//				printf(" ");
//			}
//
//			for (int k = 1; k <= i * 2 - 1; k++)
//			{
//				printf("*");
//			}
//			printf("\n");
//			
//		}
//		for (int l = n - zhong; l >= 1; l--)
//		{
//			for (int m = zhong - l; m >= 1; m--)
//			{
//				printf(" ");
//			}
//
//			for (int q = l * 2 - 1; q >= 1; q--)
//			{
//				printf("*");
//			}
//			printf("\n");
//
//		}
//	}
//
//	return 0;
//
//}