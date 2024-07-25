#include<stdio.h>
main()
{
	int num=121,rev=0,rem,temp;
	temp=num;
	while (num!=0){
		int rem = num % 10 ;
		rev=rev*10+rem;
		num=num/10;
	}
	if (rev==temp)
	  printf("palindrome");
	else 
	   printf("not palindrome");
	
}
