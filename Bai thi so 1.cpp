#include<stdio.h>
int main (){
	int x1=0,x2=1,x3;
	printf("Day fibo trong khoang 1 den 100 la: \n");
	scanf("%d",&x2);	
	for (int i = 2; x1 + x2 < 100;i++)
	{
		x3 = x1 + x2;
		printf("%d\n",x3);
		x1 = x2;
		x2 = x3;	
	}
	
	return 0;
}
