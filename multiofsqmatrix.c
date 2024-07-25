#include<stdio.h>
int main()
{
	int r,i,j,a[100][100],b[100][100];
	scanf("%d",&r);

	for (i=0;i<r;i+=1)
	{
		for(j=0;j<r;j+=1)
		{

		scanf("%d",&a[i][j]);
	}
	printf("\n");
	}

	for (i=0;i<r;i+=1)
	{
		for(j=0;j<r;j+=1)
		{
	
		scanf("%d",&b[i][j]);
	}
	printf("\n");
	}
	

	int k,cr[100][100];
	for(k=0;k<r;k+=1)
	{
	for (i=0;i<r;i+=1)
	{
	cr[i][j]=0;
	
		for(j=0;j<r;j+=1)
		{
		 cr[k][i]+= a[k][j]*b[j][i];
		}
	}
    }
    printf("The product of two matrices is :\n");
    for(i=0;i<r;i+=1)
    {
    	for(j=0;j<r;j+=1)
    	{
    		printf("%d\t",cr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
