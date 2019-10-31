#include <stdio.h>
int main(){
	int f0 = 1;
	int f1 = 1;
	int f2 = 2;
	printf("Fibonacci series between 1 and 100:\n");
	for (int i = 0; f2 < 100; i++)
	{
		printf("%d  ",f2);
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;
	}
	return 0;
}
