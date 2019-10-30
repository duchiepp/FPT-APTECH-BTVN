#include <stdio.h>
#include <math.h>
int main (){
	int a,b,c;
	printf ("Nhap 3 so a,b,c\n");
	scanf ("%d %d %d", &a, &b, &c);
	if (a < b+c && b < c+a && c < a+b){
		printf ("Day la 3 canh cua tam giac\n");
	}
	int P = a + b +c;
	printf ("Chu vi cua tam giac la: %d\n",P);
	
	float p = 0.5 * (a+b+c);
	int S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf ("Dien tich cua tam giac la: %d\n",S);
	
	
	return 0;
}

