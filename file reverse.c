#include<stdio.h>
#include<string.h>
int main()
{
	char a,s[1000];
	FILE *fptr;
	fptr=fopen("d:\aids.txt","r+");
    int i=0;
	a=getc(fptr);
	while(a!=EOF)
	{
		s[i++]=a;
		a=fgetc(fptr);
	}
	s[i]='\0';
	strrev(s);
	fseek(fptr,0,0);
	fprintf(fptr,s);
	fclose(fptr);
	
}
