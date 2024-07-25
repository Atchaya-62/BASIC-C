#include<stdio.h>

#define MAX 100
void count(int ar[100],int n,int freq[100]){
	int i;
	for (i=0;i<n;i+=1)
	  freq[ar[i]]++;
}

void sort(int ar[100],int n){
	int freq[MAX]={0},i,j,temp;
	count(ar,n,freq);
	for(i=0;i<n-1;i+=1){
		for(j=0;j<n-i-1;j++){
			if(freq[ar[j]]<freq[ar[j+1]] || (freq[ar[j]]==freq[ar[j+1]] && ar[j]>ar[j+1])){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	
}
int main(){
	int n,i,ar[100],j,count;
	scanf("%d",&n);
	for(i=0;i<n;i+=1){
		scanf("%d ",&ar[i]);
	}
	sort(ar,n);
	
	for(i=0;i<n;i++){
		printf("%d ",ar[i]);
	}
	
	
}
