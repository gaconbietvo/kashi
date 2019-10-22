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
	int s = 0;
	int dem=0;
	float t;
	for (int i=0;i<n;++i)
	{
		if (ary[i]%2!=0){
			s+=ary[i];
			dem++;
		}
	}
	t = (float) s/dem;
	printf("Trung binh cong cac so le trong mang la: %f",t);
	return 0;
}
