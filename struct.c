#include <stdio.h>

struct Student
{
	int roll;
	int m1, m2, m3;
	char name[30];
	int total;
	float per;
};

void main(){
	int n;
	printf("Enter number of Students:");
	scanf("%d",&n);
	struct Student s[n];
	for(int i = 0; i < n; i++){
		printf("Enter Rollno for Student %d:", i+1);
		scanf("%d", &s[i].roll);
		printf("Enter Name of Student %d:", i+1);
		fgets(s[i].name, 30, stdin);
		printf("Enter Marks of 1st Subject:");
		scanf("%d", &s[i].m1);
		printf("Enter Marks of 2nd Subject:");
		scanf("%d", &s[i].m2);
		printf("Enter Marks of 3rd Subject:");
		scanf("%d", &s[i].m3);
		s[i].total = s[i].m3 +s[i].m1 + s[i].m2;
		s[i].per = s[i].total/3.00;
		printf("\n--- Results ---\n");
        	printf("Roll: %d", s[i].roll);
        	printf("\nName: %s", s[i].name);
        	printf("\nTotal: %d", s[i].total);
        	printf("\nPercentage: %.2f\n", s[i].per);
		if(s[i].per < 20)
		{
		  printf("\nResult: FAIL\n");
		}
		else if(s[i].per >= 20 && s[i].per < 40)
		{
		   printf("\nResult: PASS\n");
		}
		else if(s[i].per >= 40 && s[i].per < 60)
		{
		   printf("\nResult: FIRST CLASS\n");
		}
		else if(s[i].per >= 60)
		{
		   printf("\nResult: DISTINCTION\n");
		}
	}
	
}
