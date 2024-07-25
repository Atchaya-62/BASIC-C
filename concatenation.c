#include<stdio.h>
int main(){
	char a [100],b[100];
	int i,j;
	printf("enter a ");
	gets(a);
	printf("enter b ");
	gets (b);
	for (i=0;a[i]!='\0';i+=1);
	for (j=0;b[j]!='\0';j+=1)
	{
		a[i]=b[j];
		i=i+1;
	}
	a[i]='\0';
	printf("%s\n",&a);
	printf("%d",i);	
}
	
/*#include<stdio.h>
#include<string.h>
main(){
	char a[100],b[100];
	printf("enter a ");
	gets(a);\
	printf("enter b ");
	gets (b);
	strcat(a,b);
	printf("%s",a); }*/
