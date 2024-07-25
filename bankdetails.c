#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bankdet
{
		char name[25];
		char ac[17];
		float balance;
};
struct bankdet a ;
void creatacc();
void deposit(float d_amount);
void cash_withdraw(float witdraw_amount);
float balance_enquiry();


int main(){
	int f=1 , c;
	float amt ;
	while (f==1){
		printf("1-creatacc \n 2-deposit \n 3-cash_withdraw \n 4- balance_enquiry \n");
		scanf("%d",&c);
		switch(c){
			case 1 :
				creatacc();
				break;
			case 2 :
				printf("enter amount to be deposited ");
				scanf("%f",&amt);
				deposit(amt);
				break;
			case 3 :
				printf("enter amount to be withdrawn ");
				scanf("%f",&amt);
				cash_withdraw(amt);
				break;
			case 4 :
				printf("your balance is %f ", balance_enquiry());
				break;
			default :
				f=0;
				break;
				
		}
	}
	
		
	}
void creatacc()
{
	char d;
	scanf("%c",&d);
	printf("enter name \n  ");
	gets(a.name);
	printf("enter account number ");
	scanf("%s",a.ac);
}
void deposit(float d_amount)
{
	a.balance=1000 ;
	a.balance=a.balance+d_amount;
	printf("amount successfully deposited\n");
}
void cash_withdraw(float withdraw_amount)
{
	if (withdraw_amount<=a.balance){
		a.balance=a.balance - withdraw_amount;
		printf("amount successfully withdrawn \n");
	}
}

float balance_enquiry()
{
	return a.balance ;
}

