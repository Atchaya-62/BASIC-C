#include<stdio.h>
struct aids{
	char name[100];
	int rollno;
	float mark[5],avg, total;
	char grade;
}aids[5];
char grading(float avg)
{
	if (avg>90)
	   return 'O';
	else if (avg<=90 && avg>=80)
	   return 'A';
	else if (avg<=80 && avg>=70)
	   	return 'B';
	else if (avg<=70 && avg>=60)
	    return 'C';
	else if (avg<=70 && avg>=60)
	    return 'D';
	else
	   return 'F';

}
void call_read()
{
	int i,j;
	for(i=0;i<5;i+=1)
	{
		printf("enter name \n");
		gets(aids[i].name);
		printf("enter roll no \n");
		scanf("%d",&aids[i].rollno);
		printf("enter 5 sub mark with space ");
		aids[i].total=0;
		  for (j=0;j<5;j+=1)
		    scanf("%f",&aids[i].mark[j]);
		    aids[i].total+=aids[i].mark[j];
	}
	aids[i].avg=aids[i].total/5.0;
	aids[i].grade=grading(aids[i].avg);
	
}
void display(){
	int i,j;
	for (i=0;i<5;i+=1)
	{
		printf("name %s",aids[i].name);
		printf("rollno %d",aids[i].rollno);
		for (j=0;j<5;j+=1)
		{
			printf("mark %d %f \n",j+1,aids[i].mark[j]);
		}
		printf("total:%f\n",aids[i].total);
		printf("average:%f\n",aids[i].avg);
		printf("grade:%c\n",aids[i].grade);
		printf("\n\n**************************\n");
		
	}
}
int main()
{
	call_read();
	display();
}



