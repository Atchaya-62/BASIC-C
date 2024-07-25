#include<stdio.h>
main(){
	int a,i ,multiple;
	scanf("%d",&a);
	/*for (i=1;i<=10;i+=1){
		multiple= a*i ;
		printf("%d x %d = %d \n" ,a,i,multiple);
	}*/
	
	/*i=1;
	while(i<31){
				printf("%d x %d = %d \n" ,a,i,a*i);
				i+=1;

		
	}*/
	
	
	i=1;
	do{
		
		printf("%d x %d = %d \n",a,i,a*i);
		i+=1;
	}
	while (i<31);
	return 0 ;
	
	
}
