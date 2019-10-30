#include<stdio.h>
int main (){
	int ary[10];
	for (int i =0; i < 10;i++)
	{
		printf("Nhap so:\n");
		scanf("%d",&ary[i]);
	}
	printf("Danh sach cac so nghich dao: \n");
	for (int i = 0; i < 10; i++)
	{
		int t=0;
		int temp = ary[i];
		while(temp!=0){
			t = t*10 + temp%10;
			temp/=10;
			
		}
		printf("%d\n",t);
	}
	return 0;
}
