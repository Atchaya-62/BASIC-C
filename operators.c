#include<stdio.h>
main(){
	float a,b;
	int choice;
	printf("enter a value");
	scanf("%f",&a);
	printf("enter a value");
	scanf("%f",&b);
	printf("enter operator");
	scanf("%d",&choice);
	switch(choice){
		case 1 :
			{printf ("%f",a+b);
			break;
			}
		case 2:
			{printf("%f",a-b);
			break;
			}
		case 3:
			{printf("%f",a*b);
			break;
			}
		case 4 :if(b!=0)
			{printf("%f",a/b);
			break;
			}
		case 5:
			{int i,c;
			for (i=1;i<=b;i+=1)
			{
				c=c+a;
			}
			printf("%d",c);
			break;
			}
		default :
			{
				printf("error");
				break;
			}
		return;
	}
		
}
	
	    
	
     

