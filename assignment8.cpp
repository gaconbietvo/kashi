#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n],x;
	for (int i = 0; i < n; ++i)
	{
		printf("Nhap ary[%d] = \n",i);
		scanf("%d",&ary[i]);
	}
	printf("Nhap x = \n");
	scanf("%d",&x);
	int i = 0;
	for ( i = 0; i < n; ++i)
	{
		if(x == ary[i]){
			printf("So %d nam trong mang vua nhap\n",x);
			printf("Vi tri gan nhat la: %d\n",i);
			break;
		}
	}
	if(i >= n){
		printf("So %d khong nam trong mang vua nhap\n",x);
	}

	return 0;
}
