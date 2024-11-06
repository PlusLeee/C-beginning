////								字符金字塔
//
//#include <stdio.h>
//
//int main()
//{
////  输入一个大写字母
//	char a;
//	scanf("%c",&a);
//	int n = a - 'A' + 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (int k = 1; k <= i; k++)
//		{
//			char b = 'A' - 1 + k;
//			printf("%c",b);
//		}
//
//		for (int l = i - 1; l >= 1; l--)
//		{
//			char c = 'A' - 1 + l;
//			printf("%c",c);
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}