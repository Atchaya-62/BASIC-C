#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
	char a[100] ;
	int u=0, l=0;d=0,s=0,length,i;
	printf("enter");
	scanf("%s",a);
	length=strlen(a);
	if (length>7){
		for (i=o;i<length;i+=1){
			if(isupper(a[i])){
				u=1;
				
			}
		else if (islower(a[i])){
			l=1;
		}
		else if (isdigit(a[i])){
			d=1;
		}
		else{
			s=1;
		}
		}
	
	
	    if (l&&u&&d&&s){
		printf("password is strong");
	}
	else{
		printf("weak");
	}
}
