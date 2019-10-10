#include <stdio.h>
int main()
{	
	float a;
	scanf("%f",&a);
	if (a<0)
	{
		printf("Day la so am \n");
	}
	else if (a>0)
	{
		printf("Day la so duong\n");
	}
	else
		printf("Day la so 0");
	return 0;
}
