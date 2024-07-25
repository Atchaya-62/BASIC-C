#include<stdio.h>
main(){
	int ars[100],n,i,j,temp;
	printf("enter size");
	scanf("%d",&n);
	for (i=0;i<n;i=i+1){
		printf("enter value for %d index",i);
		scanf("%d",&ars[i]);
	}
	j=n-1;
	i=0;
	while(i>j)
	{
		temp=ars[i];
		ars[i]=ars[j];
		ars[j]=temp;
		i=i+1;
		j=j-1;
	}
	for (i=0;i<n;i=i+1){
		printf("ind %d \t val %d \n",i,ars[i]);

	}
}
