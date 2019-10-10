#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float e;
	printf("Nhap 3 so a, b, c: ");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a==0)
	{
	if (b==0)
	{
	if (c==0) printf("PT co vo so nghiem");
	else printf ("PT vo nghiem");
	}
	else 
		e = (float)-c/b;
	printf("PT co nghiem x=%f",e);
	}
	else
{
d=b*b-4*a*c;
	if (d<0) printf("PT vo nghiem");
	if (d==0) printf("PT co nghiem kep x1=x2=%f", -b/(2*a));
	if (d>0) printf("PT co 2 nghiem phan biet x1=%f, x2=%f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
}
	return 0;
}
