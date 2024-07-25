#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("enter a value");
	scanf("%d",&n);
	for (i=1;i<=n;i+=1){
		sum=sum+i;
	}
	printf("%d",sum);
	
}
