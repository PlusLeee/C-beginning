//#include <stdio.h>
//
//int sum0(int n);
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a;
//
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d",&a);
//		if (sum0(a * 2) == sum0(a * 3) && sum0(a * 3) == sum0(a * 4) && sum0(a * 4) == sum0(a * 5) && sum0(a * 5) == sum0(a * 6) && sum0(a * 6) == sum0(a * 7) && sum0(a * 7) == sum0(a * 8) && sum0(a * 8) == sum0(a * 9))
//		{
//			printf("%d\n",sum0(a * 2));
//		}
//		else
//		{
//			printf("NO\n");
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
//int sum0(int n)
//{
//	int sum = 0;
//	while (n != 0)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}