#include <stdio.h>
#include<math.h>
int main (){
	float a,b,c,p,v,s;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("Day la 3 canh cua 1 tam giac\n");
		p = a+b+c;
		v = (a+b+c)/2;
		s = sqrt(v*(v-a)*(v-b)*(v-c));
		printf("Chu vi cua tam giac = %f\n", p);
  		printf("Dien tich cua tam giac = %f\n",s);
	}
	else
	{
		printf("Day khong phai la 3 canh cua 1 tam giac");
	}
	return 0;
}
