#include<stdio.h>
int main (){
	int year;
	float sum;
	float interest;
	float lai;
	printf("Enter Captial Sum: \n");
	scanf("%f",&sum);
	printf("Enter rate of Interest: \n");
	scanf("%f",&interest);
	printf("Enter No of years: \n");
	scanf("%d",&year);
	interest = interest/100;
	printf("Year\t Interest\t Sum\n");
	for(int i = 1; i <= year;i++)
	{
		lai = sum*interest;
		sum += lai;
		printf("%d\t %f\t %f\n",i,lai,sum);
	}
	
	return 0;
}
