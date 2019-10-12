#include <stdio.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap canh a:\n");
		scanf("%d",&a);
		printf("Nhap canh b:\n");
		scanf("%d",&b);
		printf("Nhap canh c:\n");
		scanf("%d",&c);	
	}while(a>b+c||b>a+c||c>a+b);
	printf ("Day la 3 canh cua 1 tam giac");
	return 0;
}
