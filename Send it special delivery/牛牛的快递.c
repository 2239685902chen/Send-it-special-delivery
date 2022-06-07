#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float q = 0;
	char w = 0;
	int e = 0, r = 0;
	scanf("%f %c", &q, &w);
	e = (int)q;
	if (q - e)
	{
		e = (int)q + 1;
	}
	if (e < 1)
	{
		r = 20;
	}
	else
	{
		r = 20 + (e - 1) * 1;
	}
	if (w == 'y')
	{
		r += 5;
	}
	printf("%d\n", r);
	return 0;
}