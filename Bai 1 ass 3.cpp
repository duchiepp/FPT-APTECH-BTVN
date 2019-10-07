#include <stdio.h>
int main (){
	int a,b;
	printf ("nhap so thu nhat: \n",a);
	scanf ("%d" , &a);
	printf ("nhap so thu hai: \n",b);
	scanf ("%d" , &b);
	if (a > b){
		printf ("so lon hon la: %d\n",a);
	}else{
		printf ("so lon hon la: %d\n",b);
	}
	
	return 0;
}
