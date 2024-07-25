#include<stdio.h>
void read(int a[],int n )
{
	int i;
	for (i=0;i<n;i+=1)
	 scanf("%d",&a[i]);
}
void display(int a[],int n)
{
	int i ;
	for (i=0;i<n;i+=1)
	  printf("%d  ",a[i]);
	  printf("\n");
}
int main()
{
	int n1,n2,a[100],b[100];
	printf("enter size of array 1 ");
	scanf("%d",&n1);
	
	printf("enter size of array 2 ");
	scanf("%d",&n2);
	read(a,n1);
	read(b,n2);
	display(a,n1);
	display(b,n2);
		
	
}
