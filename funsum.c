#include<stdio.h>
int sum(int ar[], int n )
{
	if (n==0){
		return 0 ;
	}
	else {
		return (ar[0]+sum(ar+1,n-1));
	}
}
int main(){
	int n,ar[100],i;
	printf("enter ");
	scanf("%d ",&n);
	
	for(i=0;i<n;i+=1){
		printf("enter ");
		scanf("%d",&ar[i]);
	}
	printf("%d",sum(ar,n));
}
