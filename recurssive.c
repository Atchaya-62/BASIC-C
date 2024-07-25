#include<stdio.h>
int main()
{
	int n;
	printf("enter value for n ");
	scanf("%d",&n);
	printf("%d",print(n));
}
int print(int n)
{
	if (n==0){
		return 1 ;}
	else {
		return n*print(n-1);}
}
