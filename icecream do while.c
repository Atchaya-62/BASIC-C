#include<stdio.h>
int main()
{
	int n,amount=0 ;
	do{
		printf("1-strawberry - Rs30 \n 2-chocolate - Rs 20  \n 3-vannila - Rs 20 \n 4-butterscotch - Rs 30 \n 5-pistah - Rs 30 \n ");
		printf("enter your a number to choose flavour : ");
		scanf("%d",&n);
		switch(n){
			case 1:
				printf("strawbwerry \n\n");
				amount=amount+30;
				break;
			case 2 :
				printf("chocolate \n\n");
				amount=amount+20;

				break;
			case 3 :
				printf("vannila \n\n");
				amount=amount+20;

				break;
			case 4 :
				printf("butterscotch \n\n");
				amount=amount+30;

				break;
			case 5 :
				printf("pistah \n\n");
				amount=amount+30;

				break;
			default :
				printf("order is ready \n\n Your total amount is %d",amount);
				
				break;
		}
		}while(n>0 && n<6);
}
