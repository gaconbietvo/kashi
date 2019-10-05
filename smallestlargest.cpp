#include <stdio.h>
int main(){
	float a,b,c;
	printf("Enter three numbers\n");
	scanf("%f,%f,%f",&a,&b,&c);
	if(a<b && a<c){
		printf("%f is smallest\n",a);
		}
	else if (b<c){
		printf ("%f is smallest\n",b);
	}
	else{
		printf("%f is smallest\n",c);
	}
	if(a>b && a>c){
		printf("%f is largest\n",a);
		}
	else if (b>c){
		printf("%f is largest\n",b);
	}
	else{
		printf("%f is largest\n",c);
	}
	return 0;
}
