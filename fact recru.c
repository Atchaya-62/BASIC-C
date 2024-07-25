#include<stdio.h>
int fact(int x)
{
	if (x==0)
     	return 1;
	else  
	    return x*fact(x-1);
	 
}
int main(){
	int n;
	printf("enter a number ");
	scanf("%d",&n);
	int fa = fact(n);
	printf("factorial of %d is %d",n,fa);
}
