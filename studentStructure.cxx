#include<stdio.h>
#include<conio.h>

struct student
{
	char name[20];
	char usn[10];
	int sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8, sub9;
}s1;

void main()
{
	clrscr();
	printf("\n Enter name of student :");
	gets(s1.name);
	printf("\n Enter USN of student :");
	gets(s1.usn);
	printf("\n Enter marks of all subjects :");
	scanf("%d %d %d %d %d %d %d %d %d",&s1.sub1,&s1.sub2,&s1.sub3,&s1.sub4,&s1.sub5,&s1.sub6,&s1.sub7,&s1.sub8,&s1.sub9);
	printf("\n Name = ");
	puts(s1.name);
	printf("\n Usn = ");
	puts(s1.usn);
	printf("\n Marks :");
	printf("%d %d %d %d %d %d %d %d %d",s1.sub1,s1.sub2,s1.sub3,s1.sub4,s1.sub5,s1.sub6,s1.sub7,s1.sub8,s1.sub9);
	getch();
}