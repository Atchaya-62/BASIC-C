#include<stdio.h>
int main(){
	int n,i,max,ar[100],second;
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	  scanf("%d\t",&ar[i]);
	if(ar[0]>ar[1]){
	 max=ar[0];
	 second=ar[1];
     }
    else{
    	max=ar[1];
    	second=ar[0];
	}
	for(i=2;i<n;i+=1){
		if(max<ar[i]){
			second=max;
			max=ar[i];
		}
		else if (second<ar[i])
		    second=ar[i];
	}
	if (n<2)
	   printf("Second largest number in an array : -1");
	else
       printf("Second largest number in an array %d: ",second);
       
       
   }
