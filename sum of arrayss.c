#include<stdio.h>
main(){
	int ars[100],i,sum=0,n,avg;
	printf("enter a size : ");
	scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		printf("enter value for %d index ",i );
		scanf("%d",&ars[i]);
	}
	for(i=0;i<n;i=i+1){
		sum=sum+ars[i];
		printf("ind %d \t val %d \n",i,ars[i]);
	}
	printf("total sum %d \n",sum);
	
	avg=sum/n;
	printf("avg %d",avg);

	
}
