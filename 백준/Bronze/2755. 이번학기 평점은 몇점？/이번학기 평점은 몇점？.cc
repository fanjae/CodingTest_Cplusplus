#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	float ans=0.0;
	float ans_gpa;
	int sum=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		char name[105];
		int grade;
		char gpa[5];
		scanf("%s %1d",name,&grade);
		getchar();
		scanf("%s",gpa);
		getchar();
		sum = sum + grade;
		if(strcmp(gpa,"A+")==0)
		{
			ans_gpa = 4.3;
		}
		else if(strcmp(gpa,"A0")==0)
		{
			ans_gpa = 4.0;
		}
		else if(strcmp(gpa,"A-")==0)
		{
			ans_gpa = 3.7;
		}
		else if(strcmp(gpa,"B+")==0)
		{
			ans_gpa = 3.3;
		}
		else if(strcmp(gpa,"B0")==0)
		{
			ans_gpa = 3.0;
		}
		else if(strcmp(gpa,"B-")==0)
		{
			ans_gpa = 2.7;
		}
		else if(strcmp(gpa,"C+")==0)
		{
			ans_gpa = 2.3;
		}
		else if(strcmp(gpa,"C0")==0)
		{
			ans_gpa = 2.0;
		}
		else if(strcmp(gpa,"C-")==0)
		{
			ans_gpa = 1.7;
		}
		else if(strcmp(gpa,"D+")==0)
		{
			ans_gpa = 1.3;
		}
		else if(strcmp(gpa,"D0")==0)
		{
			ans_gpa = 1.0;
		}
		else if(strcmp(gpa,"D-")==0)
		{
			ans_gpa = 0.7;
		}
		else
		{
			ans_gpa = 0.0;
		}
		ans += ans_gpa * (float)grade;
	}
	
	printf("%.2f\n",ans/ (float)sum); 
}
	