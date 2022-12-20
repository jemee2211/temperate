#include<stdio.h>
main(){
	
	int a;
	int num = 0;

	
	printf("Enter Number :");
	scanf("%d",&a);

	
	while(a!=0){
		
	  
		a =a/10;
		num++;
		
	}
	
    
	printf("%d",num);
	
}
