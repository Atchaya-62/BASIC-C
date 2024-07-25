#include<stdio.h>
main(){
	int num=543,pr=1,rem;
	while(num!=0){
		rem=num%10;
		pr=pr*rem;
		num=num/10;
	}
    	printf("%d",pr) ;
}
