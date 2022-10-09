#include<stdio.h>
#include<string.h>
#include<conio.h> 
char name[50],registration[20],grade[20];
float average;
int n,i,sum,marks,s1,s2,s3,s4,s5,s6,s7;
    main()
{
/*	printf("Enter Student name:\n");
     scanf("%s",& name);

	printf("Enter registration number:\n");
	scanf("%s",& registration);
	printf("Enter number of units:\n");
	scanf("%s",&n); */
	printf("Enter marks for your seven units:\n");
	scanf("%d%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
	sum=s1+s2+s3+s4+s5+s6+s7;
	average=sum/7;
	printf("\nTotal  marks for seven units %d",sum);
	printf("\nAverage of the seven units %f",average);
{
}
	if (average<0 &&average>100)
	{
	printf("\nWrong Entry");
}
else if(average>=0&&average<40)
{
	printf("\nGrade E=FAIL");
}
else if(average>=40&&average<=50)
{
	printf("\nGrade D=PASS");
}
else if(average>50&&average<=60)
{
	printf("\nGrade C=SECOND CLASS (LOWER DIVISION)");
}
else if(average>60&&average<=70)
{
printf("\nGrade B=SECOND CLASS (UPPER DIVISION)");	
}
else if(average>70&&average<=80)
{
	printf("\nGrade A=FIRST CLASS");
}
else if(average>80&&average<=100)
{
	printf("\nUngradable Genious Student");
}
return 0;
}
