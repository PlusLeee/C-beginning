//#include <stdio.h>  
//
//int isLeapYear(int year);
//
//int main() {
//    int year, month, day;
//    scanf("%d %d %d", &year, &month, &day);
//
//
//    if (month < 1 || month > 12 || day > 31) 
//    {
//        printf("NO");
//        return 0;
//    }
//
//    if (month == 2) 
//    {
//        int leap = isLeapYear(year);
//        if (leap && day > 29) 
//        {
//            printf("NO");
//        }
//        else if (!leap && day > 28) 
//        {
//            printf("NO");
//        }
//        else 
//        {
//            printf("YES");
//        }
//    }
//    else if (month == 4 || month == 6 || month == 9 || month == 11) 
//    {
//        if (day > 30) 
//        {
//            printf("NO");
//        }
//        else 
//        {
//            printf("YES");
//        }
//    }
//    else 
//    {
//        printf("YES\n");
//    }
//
//    return 0;
//}
//
//int isLeapYear(int year) 
//{
//    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) 
//    {
//        return 1;
//    }
//    return 0;
//}