#include<stdio.h>
main(){
	int t,a,d,rev=0 ;
	printf("enter a number ");
	scanf("%d",&a);
	t=a;
	while (a>0){
		d= a%10 ;
		rev= rev*10+d;
		a=a/10;
		
	}
	printf("reverse of %d is %d",t,rev);
}
