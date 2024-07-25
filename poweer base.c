
#include<stdio.h>
main(){
	int a,b,c,i;
	printf("enter values for a ");
	scanf("%d",&a);
	printf("enter values for b ");
	scanf("%d",&b);

	c=1;
	for (i=1;i<=b;i+=1)
	{
		c=c*a;
	}
	printf("%d",c);
	
	
}
