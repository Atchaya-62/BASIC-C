#include<stdio.h>
int main()
{
	int a[100][100],n,j,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		{for(j=0;j<n;j+=1)
		
		printf("enter position %d %d ",i,j);
		scanf("%d",a[i][j]);
	}
	printf("\n");}
	for (i=0;i<n;i+=1)
	{
		for (j=0;j<n;j+=1)
		{
			printf("%d %d",i , j);
			printf("%d",a[i][j]);
		}
		printf ("\n");
		
	}
	return 0 ;
}
