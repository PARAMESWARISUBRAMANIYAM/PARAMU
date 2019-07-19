#include <stdio.h>

int main(void)
{
	int avg;
	scanf("%d",&avg);
	if(avg>0)
	printf("Positive");
	else if(avg<0)
	printf("Negative");
	else
	printf("Zero");
	return 0;
}

