#include <stdio.h>
int main (){
	int x;
	printf ("Nhap vao mot so: \n");
	scanf ("%d",&x);
	if (x > 0){
		printf ("Day la so duong \n");
	}else{
		if (x == 0){
			printf ("Day la so 0 \n");
		}else{
			printf ("Day la so am \n");
		}
	}
	
	return 0;
}
