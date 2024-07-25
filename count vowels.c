#include<stdio.h>
#include<string.h>

 int main(){
	char a[100];
	int count=0,countc=0,n,i;
	printf("enter a ");
	scanf("%s", a);
    i=strlen(a);
	
	
	for(n=0;n<i;n+=1){
		if ((a[n]=='a') || (a[n]=='e')|| (a[n]=='i')|| (a[n]=='o')|| (a[n]=='u')){
			count+=1;
			
		}
		
		else {
			countc+=1;
			
		}
	}
	printf("no of vowels %d\n",count);
	printf("no of consonants %d \n",countc);
	
	
	return 0;
	}
