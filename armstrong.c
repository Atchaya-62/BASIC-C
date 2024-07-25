#include<stdio.h>
main(){
	int a ,t,d,s=0;
	printf("enter a value");
	scanf("%d",&a);
	t = a;
	while (a>0){
		d=(a%10);
		d=d*d*d;
		s=s+d;
		a=a/10;
		
	}
	if (s==t)
	  printf("it is armstrong");
	else
	   printf("not armstrong");
}
