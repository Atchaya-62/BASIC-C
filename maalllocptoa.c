#include<stdio.h>
int main(){
	int n=5,i;
	int*p;
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	  
	  scanf("%d ",(p+i));
	for (i=0;i<n;i+=1)
	  printf("%d ",*(p+i));
}
