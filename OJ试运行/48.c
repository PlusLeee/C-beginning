#include <stdio.h>

int check(int i)
{
	int rev = 0;
	int n = i;
	while (n != 0)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
	}
	if (rev == i)
		return 1;
	return 0;
}

int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	for (int i = a; i <= b; i++)
	{
		if (check(i))
		{

		}

	}







	return 0;
}
