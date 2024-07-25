#include<stdio.h>
int main(){
	int a[100],n,sum=0;
	float avg;
	scanf ("%d",&n);
	int i ,*ptr;
	ptr=a;
	for(i=0;i<n;i+=1)
	{

	  scanf("%d",ptr+i);
    }
	for(i=0;i<n;i+=1)
	  sum+=*(ptr+i);
	avg= sum/n;
	printf("The average of the array elements is: %.2f\n",avg);
	printf("The elements of the array are: \n");
	printf("%d ",a);
	
}
