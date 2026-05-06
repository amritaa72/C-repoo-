#include <string.h>
#include <stdio.h>
void main()
{
	struct student
	{
		char usn[11];
		char name[20];
		int m1, m2,m3,m4,m5,m6;
		float cgpa;
		//all these are data members
	};
	struct student s1,s2,s3;
	//s1 is a structure variable
	// structure array-- struct student s1[10];

	strcpy(s1.usn,"1RV25CD081");

	strcpy(s1.name,"Oscar");
	//s1.m1=89;
	s1.m2=88;
	s1.m3=75;
	s1.m4=97;
	s1.m5=89;
	s1.m6=77;
	s1.cgpa=(s1.m1+s1.m2+s1.m3+s1.m4+s1.m5+s1.m6)/6;

    printf("\nEnter name\t");
	scanf("%s",&s2.name);
	
	printf("\n Enter USN");
	scanf("%s",&s2.usn);

	printf("\nEnter m1\t");
	scanf("%d",&s2.m1);
	printf("\nEnter m2\t");
	scanf("%d",&s2.m2);
	printf("\nEnter m3\t");
	scanf("%d",&s2.m3);
	printf("\nEnter m4\t");
	scanf("%d",&s2.m4);
	printf("\nEnter m5\t");
	scanf("%d",&s2.m5);
	printf("\nEnter m6\t");
	scanf("%d",&s2.m6);
	
    s2.cgpa=(s2.m1+s2.m2+s2.m3+s2.m4+s2.m5+s2.m6)/6.0;
    printf("Marks and cgpa of student %s and usn %s",s2.name,s2.usn);
    printf("%d\t%d\t%d\t%d\t%d\t%d\t%f\t",s2.m1,s2.m2,s2.m3,s2.m4,s2.m5,s2.m6,s2.cgpa);

}
