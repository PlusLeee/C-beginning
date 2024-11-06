//#include <stdio.h>
//#include <math.h>
//
//int check(int n, unsigned long long arr[], int len);
//
//int main()
//{
//
//	unsigned long long arr[8] = { 6, 28, 496, 8128, 33550336 , 8589869056, 137438691328, 2305843008139952128 };
//	int n;
//	int len = 8;
//	while (scanf("%d", &n) != EOF)
//	{
//		unsigned long long fac1 = 1;
//		unsigned long long fac2 = 1;
//		int t = check(n, arr, len);
//
//		for (int j = 1; j < t; j++)
//		{
//			fac1 *= 2;
//		}
//		for (int k = 1; k <= t; k++)
//		{
//			fac2 *= 2;
//		}
//		fac2--;
//
//		printf("%llu=%llu*%llu\n", arr[n - 1], fac1, fac2);
//
//
//
//	}
//	
//	return 0;
//}
//
//int check(int n, unsigned long long arr[], int len)
//{
//	int i = 1;
//	while (arr[n - 1] != pow(2,i - 1) * (pow(2,i) - 1))
//	{
//		i++;
//	}
//	return i;
//}