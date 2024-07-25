#include<stdio.h>
int main(){
	int sum=0,n=0;
	do{
		sum+=n;
		printf("%d\n",sum);
		printf("enter a value ");
		scanf("%d",&n);
		
	}while(n<10&&n>0);
	printf(" sum of n
	
	 is ; %d",sum);
}
