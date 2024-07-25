#include<stdio.h>
main(){
	int a,b,c;
	printf("enter value for a ");
	scanf("%d",&a);
	printf("enter value for b ");
	scanf("%d",&b);
	printf("enter value for c ");
	scanf("%d",&c);
	if ((a>b)&&(a>c)){
		printf("a is greatest");
	} 
	else if (b>c){
		printf("b is greatest");
	}
	else if (c>b) {
		printf("c is greatest");
	
	}
	else {
		printf("equal values");     
	}
}
