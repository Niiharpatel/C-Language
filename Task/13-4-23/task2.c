#include <stdio.h>

int main()
{
	// to find user pass or fail in exam

	int mark;
	int b = 35;

	printf("enter marks= ");
	scanf("%d", &mark);

	if (mark >= b)
	{
		printf("you pass the exam");
	}
	else
	{

		printf("you fail the exam");
	}
	return 0;
}
