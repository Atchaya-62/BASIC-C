#include<stdio.h>
  int main(){
  
	int r,c,i,j,a[100][100],t[100][100];
	scanf("%d",&r);
	scanf("%d",&c);
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
		scanf("%d",&a[i][j]);
	}
}
	for (i=0;i<r;i+=1)
	{
		for(j=0;j<c;j+=1)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("The transpose of the matrix is:\n");
	for (i=0;i<c;i+=1)
	{
		for(j=0;j<r;j+=1)
		{
		    printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}

	
	
