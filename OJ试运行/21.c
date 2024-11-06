//#include <stdio.h>
//
//int main()
//{
//	int hour, min;
//	scanf("%d:%d",&hour,&min);
//
//	if (hour > 12 && hour <= 23)
//	{
//		if (min == 0)
//		{
//			for (int i = 1; i <= hour - 12; i++)
//			{
//				printf("Dang");
//			}
//		}
//
//		else if (min != 0)
//		{
//			for (int i = 1; i <= hour - 12 + 1; i++)
//			{
//				printf("Dang");
//			}
//		}
//	}
//
//	else if (hour == 12 && min != 0)
//	{
//		printf("Dang");
//	}
//
//	else
//		printf("Only %02d:%02d.  Too early to Dang.",hour,min);
//
//
//	return 0;
//}
