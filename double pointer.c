#include<stdio.h>
int main()
{
	int a=10;
	int *p,**p1;
	p=&a;
	p1=&p;
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%p\n",&p);
	printf("%p\n",p1);
	printf("%d\n",*(&a));
	printf("%d\n",*p);
	printf("%d\n",*(&p));
	printf("%d\n",**p1);
	
}
