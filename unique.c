#include<stdio.h>
int unique(int ar[100],int n){
	int flag=0,i,j;
	for(i=0;i<n;i+=1){
		for(j=0;j<i;j+=1){
			if(ar[i]==ar[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)
		  printf("%d ",ar[i]);
	}
}
int main(){
	int n,i,at[100];
	scanf("%d",&n);
	for(i=0;i<n;i+=1)
	  scanf("%d\t",&at[i]);
	unique(at,n);
	
}
