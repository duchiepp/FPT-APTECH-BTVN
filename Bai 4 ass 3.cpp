#include <stdio.h>
#include <math.h>
int main (){
	float a,b,c,d,x1,x2;
	float delta = b*b - 4*a*c;
	printf ("Nhap vao 3 so a,b,c: \n");
	scanf ("%d %d %d", &a, &b, &c);
	if (a == 0){
		if (b == 0){
			printf ("Phuong trinh vo nghiem \n");
		}else{
			if (c == 0){
				printf ("Phuong trinh vo so nghiem \n");
			}else{
				printf ("Phuong trinh co nghiem duy nhat:%f \n", - c/b);
			}
		}
	}else{
		if (delta > 0){
			x1 = (-b + sqrt(d))/(2*a);
			x2 = (-b - sqrt(d))/(2*a);
			printf ("Phuong trinh co nghiem 1 la:%f \n",x1);
			printf ("Phuong trinh co nghiem 2 la:%f \n",x2);
		}else
			if (delta == 0){
				printf ("Phuong trinh co nghiem kep la x1=x2=%f \n", -b/(2*a));
			}
		else{
			printf ("Phuong trinh vo nghiem \n");
		}
	
	}
	return 0;
}

