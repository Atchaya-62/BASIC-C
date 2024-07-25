#include<stdio.h>
int main(){
	FILE *fptr;
	char a ;
	int c=0,w=0;
	fptr=fopen("d:aids.txt","r");
	printf(" %d\n",ftell(fptr));
	a=fgetc(fptr);
	while (a!=EOF)
	{
		if (a=='\n' || a== ' ' ){
			w+=1;
		}
		c+=1;
		printf("%c",a);
		a=fgetc(fptr);
	}
	w+=1;
	printf("\nno of letters %d",c);
	printf("\n no on words %d ",w);
	printf("\n %d",ftell(fptr));
	fclose(fptr);
	
}
