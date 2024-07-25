#include<stdio.h>
int main()
{
	int a[100],n,i,se;
	printf("enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	{
		printf("enter the value for pod %d ",i);
		scanf("%d",&a[i]);
	}
	printf("enter the search element");
	scanf("%d",&se);
	for(i=0;i<n;i+=1)
	{
		if(a[i]==se){
			break;
		}
	}
	if (i<n){
		printf("element found at index %d",i);
	}
	else
	{
		printf("element not found");
	}
	
}
