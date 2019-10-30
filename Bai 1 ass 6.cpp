#include <stdio.h>
int main (){
	int ary[10],i;
	int S = 0;
	float avg;
	for (int i = 0;i < 10; i++)
	{
		printf ("Nhap ary[%d] =\n",i);
		scanf ("%d", &ary[i]);
	}
	int dem =0;
	for (int i = 0; i <10; i++)
	{
		S= S + ary[i];
		dem++;
	}
	avg = S/dem;
	printf ("Trung binh mang la: %f\n",avg);
	
	return 0;
}
