#include<stdio.h>
int main(){
	int a[20],n,i,t;
	printf("size of array ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	//clockwise rotation
/*	t=a[n-1];
	for(i=n-2;i>=0;i-=1)
		a[i+1]=a[i];
		a[0]=t;
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);*/
		
	
		
		
		
	//anticlockwise rotation
	t=a[0];	
    for(i=0;i<n-1;i+=1)
       a[i]=a[i+1];
	   a[n-1]=t;
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	
	
}
