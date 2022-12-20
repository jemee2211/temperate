#include<stdio.h>
main(){
	
	
		int a;
		int n;
		int fac = 1;
		printf("Enter Number:");
		scanf("%d",&n);
		
	for(a=1 ; a<=n ; a++){
		
		fac*=a;
		
   }
   printf("%d\n",fac);
} 
