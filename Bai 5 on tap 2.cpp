#include <stdio.h>
int main (){
	int n;
	printf ("Nhap 1 so n\n");
	scanf ("%d",&n);
	int dem = 0;
	int j;
	int i;
	for ( int i=2;i<=n;i++){
		for ( int j=1;j<=i;j++){
			if (i%j==0){
				dem++;
			}
		}
	}
		if (dem == 2){
			printf ("%d\n",i);
			dem=0;
	}

	return 0;
}

