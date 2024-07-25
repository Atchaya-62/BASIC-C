#include<stdio.h>
int main(){
	int ar[100],i,n;
		float avg,sum=0;
		scanf("%d",&n);
		for(i=0;i<n;i+=1){
			printf("enter ");
			scanf("%d",&ar[i]);
			sum+=ar[i];
		}
		avg=sum/n;
		printf("avg = %.2f ",avg);
}
