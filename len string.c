#include<stdio.h>
main(){
	char a[100] ;
	int i;
	printf("enter a ");
	gets(a);
	printf("%s",a);
	for(i=0;a[i]!='\0';i+=1);
	printf("\n length of string %d",i);
	
}
