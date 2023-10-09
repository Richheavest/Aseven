#include<stdio.h>
int main()
{
	int i, sum;
	for (sum = 0, i = 1; i < 100; )
	{
		sum = sum + i;
		i = i + 2;
	}
	printf("%d", sum);
	return 0;
}