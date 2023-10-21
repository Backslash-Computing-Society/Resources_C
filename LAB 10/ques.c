#include<stdio.h>
int main()
{
	struct student{
		int rno;
		char name[100];
		int marks;
		char grade;
	};
	struct student rec[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter Roll number of %d th student: ",i+1);
		scanf("%d",&rec[i].rno);
		printf("Enter name of %d th student: ",i+1);
		scanf("%s",&rec[i].name);
		printf("Enter marks of %d th student: ",i+1);
		scanf("%d",&rec[i].marks);
		printf("Enter grade of %d th student: ",i+1);
		scanf("%c",&rec[i].grade);
		printf("\n");
	}
	int x;
	printf("Enter the roll number to search: ");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(rec[i].rno==x)
		{
			printf("Student Details:-\n");
			printf("Name\t%s\n",rec[i].name);
			printf("Marks\t%d\n",rec[i].marks);
			printf("Grade\t%c\n",rec[i].grade);
			break;
		}
		else
		{
			printf("Student not found");
		}
	}
	return 0;
	
}
