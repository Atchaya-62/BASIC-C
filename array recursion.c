#include<stdio.h>
int main(){
	int a[]={1,2,3};
	int *p;
	p=a;
	int i;
	for (i=0;i<3;i++)
	  printf("%d",*(p+i));
}
