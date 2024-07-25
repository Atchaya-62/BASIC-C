#include<stdio.h>
int main(){
	FILE *fptr;
	char a[100];
	fptr=fopen("d:/aids.txt","w");
	fprintf(fptr,"hellooooo boiii");
	fclose(fptr);
	
	fptr=fopen("d:/aids.txt","r");
//	fscanf(fptr,"%s",a);
	fgets(a,100,fptr);
	printf("%s",a);
	fclose(fptr);
	
}
