#include<stdio.h>
main(){
	float rating;
	printf("enter rating 0-5 ");
	scanf("%f",&rating);
	if (rating<2){
		printf("not recommended");}
		
	else if (rating<=4){
		printf("recommended");
	}
	
	else if (rating<=5){
		printf("highly rated");
	}
	
	else
	{
		printf("invalid rating");
	}
	
	
}
