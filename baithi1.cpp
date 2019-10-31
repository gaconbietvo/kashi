#include <stdio.h>
int main(){
	int f0 = 0;
	int f1 = 1;
	int f2 = 1;
	printf("Fibonacci series between 1 and 100:\n");
	for (int i = 1; f2 < 89; i++)
	{
		f0 = f1;
		f1 = f2;
		f2 = f0 + f1;
		printf("%d  ",f2);
	}
	return 0;
}
