#include <stdio.h>
#include <math.h>
int main (){
	int n,i;
	float S = 0;
	printf ("Nhap mot so\n");
	scanf ("%d",&n);
	while ( n <= 0);
	for ( int i; i <= n; i++);
	{
		printf ("Nhap gia tri cua i\n");
		scanf ("%d",&i);
		S = S + 1/(float)i;
		i++;
	}
	printf ("Tong cua day so S = %f\n",S);
	
	
	return 0;
}
