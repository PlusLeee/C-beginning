//#include <stdio.h>
//
//int main()
//{
//	double a, b,res;
//	char symbol;
//	while(scanf("%lf%c%lf", &a, &symbol, &b) != EOF)
//	{
//		switch (symbol)
//		{
//		case '+':
//			res = a + b;
//			printf("%.4lf%c%.4lf=%.4lf\n", a, symbol, b, res);
//			break;
//		case '-':
//			res = a - b;
//			printf("%.4lf%c%.4lf=%.4lf\n", a, symbol, b, res);
//			break;
//		case '*':
//			res = a * b;
//			printf("%.4lf%c%.4lf=%.4lf\n", a, symbol, b, res);
//			break;
//		case '/':
//			if (b != 0.0)
//			{
//				res = a / b;
//				printf("%.4lf%c%.4lf=%.4lf\n", a, symbol, b, res);
//				break;
//			}
//			else
//			{
//				printf("Wrong!Division by zero!\n");
//				continue;
//			}
//		default:
//			printf("Invalid operation!\n");
//		}
//	}
//	
//	return 0;
//}