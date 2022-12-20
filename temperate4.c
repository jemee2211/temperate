#include<stdio.h>
main(){
	
	int a;
	int f,l,sum;
	
	printf("Enter Number:");
	scanf("%i",&a);
	
	l = a % 10;
	
	while(a>10){
		
		a = a/10;
		
	}
	
	f = a;
	sum = f+l;
	printf("%d",sum);
}
