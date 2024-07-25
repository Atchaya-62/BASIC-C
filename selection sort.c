#include<stdio.h>
int main(){
	int ar[100],n,c,se,j,min=0,i,temp;
	printf("enter the value");
	scanf("%d",&n);
	for(c=0;c<n;c+=1)
	{
		printf("enter the value for pod %d ",c);
		scanf("%d",&ar[c]);
	}
	
	
	
	for (i=0;i<n;i+=1)
	{
		min=i;
		for(j=i+1;j<n;j+=1){
			if (ar[min]>ar[j]){
				min=j;
			}
		}
		if(min!=i){
		
		temp = ar[min];
		ar[min]=ar[i];
		ar[i]=temp;}
	}
	for (i=0;i<n;i++)
	  printf("%d  ",ar[i]);
	
	
	
}
