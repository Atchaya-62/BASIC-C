#include<stdio.h>
main()
{
	char letter ;
	printf("enter a letter ");
	scanf("%c",&letter);
	if ( letter == 'a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
		printf("vowel");
	
	else 
	    printf("consonent");
	return 0 ;
}
