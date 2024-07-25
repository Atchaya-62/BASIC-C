#include<stdio.h>
main(){
	int a[100],n,i,j,t;
	printf("enter value for n ");
	scanf("%d",&n);
	for (i=0;i<n;i+=1){
		printf("enter ");
		scanf("%d",&a[i]);
	}
	
	j=n-1;
	i=0;
	while(i<j){
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i=i+1;
		j=j-1;
		
	for (i=0;i<n;i+=1){
		printf("%d\t",a[i]);
	}
}
}
	

