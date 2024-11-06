//#include <stdio.h>
//
//int runnian(int year);
//
//int main()
//{
//	int year, month;
//	scanf("%d %d",&year,&month);
//	int check = runnian(year);
//	switch (month)
//		{
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//			case 12:
//				printf("31");
//				break;
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				printf("30");
//				break;
//		}
//	
//	if (month == 2)
//	{
//		switch (check)
//		{
//		case 1:
//			printf("29");
//			break;
//		case 0:
//			printf("28");
//			break;
//		}
//	
//
//	}
//
//
//
//
//
//
//	return 0;
//}
//
//int runnian(int year)
//{
//	if (year % 100 != 0 && year % 4 == 0)
//		return 1;
//	if (year % 100 == 0 && year % 400 == 0)
//		return 1;
//	return 0;
//}