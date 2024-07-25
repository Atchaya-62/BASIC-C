/*#include<stdio.h>
struct stud
{
	int a,b;
	char name[20];
	float per;
	
};
main()
{
	struct stud a;
	printf("size of a %d \n ",sizeof(a));
	
	a.a=10;
	a.b=20;
	printf("\n enter name ");
	gets(a.name);
	a.per=76.5;
	printf("%d\n",a.a);
	printf("%d\n",a.b);
	printf("%s\n",a.name);
	printf("%.1f\n",a.per);
}*/

#include <stdio.h>
struct players 
{
	char str[1000];
	int runs;
};
int main(){
	struct players a[11];
	int i,sum=0;
	printf("kkr team");
	for(i=0;i<=10;i++)
	{
		scanf("%s",&a[i].str);
		scanf("%d",&a[i].runs);
	}
	for(i=0;i<=10;i++)
	
	sum+=a[i].runs;
	
	printf("%d",sum);

} 
