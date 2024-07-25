#include<stdio.h>
main(){
	int a ;
	printf ("enter a number");
	scanf ("%d",&a);
	if ( ((a%4==0) || (a%400==0 ))  && (a%100!=0)) 
		printf("it is a leap year");
	else 
	    printf ("not a leap year");
	    
}
