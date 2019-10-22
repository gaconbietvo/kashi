#include <stdio.h>
int main(){
	int n;
	printf("Nhap so luong so co trong day:\n");
	scanf("%d",&n);
	int ary[n];
	for (int i=0;i<n;++i)
	{
	printf("Nhap so:\n");
	scanf("%d",&ary[i]);
}
	for (int i=0;i<n;++i)
	{
		if(ary[i]<0)
		{
			ary[i]=0;
		}
	}
	for (int i=0;i<n;++i)
	{
	printf ("%d   ",ary[i]);
	}
return 0;
}
