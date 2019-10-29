#include<stdio.h>
int Fibonacci(int n){
	scanf("%d",&n);
	int f0=1;
	int f1=1;
	int fn=1;
	for (int i = 2; i <= n;i++){
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}
	printf("So fibo thu n = %d\n",n,fn);
	
	return 0;
}
int main (){
	Fibonacci(10);
	return 0;
}
