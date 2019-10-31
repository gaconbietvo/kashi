#include <stdio.h>
#include <math.h>
int main (){
	float x;
	float y;
	int z;
	float n;
	printf("Enter Capital Sum:\n");
	scanf("%f",&x);
	printf("Enter Rate of Interest:\n");
	scanf("%f",&y);
	printf("Enter No of years:\n");
	scanf("%d",&z);
	for (int i=1; i<=z; i++)
	{
		n = x*(y/100);
		x += n;
		printf("Year	Interest	Sum\n");
		printf("%d	%f	%f\n",z,n,x);
	}
	return 0;
}
