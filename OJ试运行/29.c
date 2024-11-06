//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int n, m;
//	scanf("%d %d",&n,&m);
//	
//
//	int extra = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		extra *= 2;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		int res = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			char ans;
//			scanf(" %c",&ans);
//			if (ans == 'y')
//			{
//				res = res * 2;
//			}
//			else if (ans == 'n')
//			{
//				res = res * 2 + 1;
//			}
//		}
//		res = res - extra + 1;
//		printf("%d\n", res);
//	}
//
//	return 0;
//}
