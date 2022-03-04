#include<stdio.h>
struct st{
	char name[20];
	int rollno;
	float marks;
};
void fun_st(char* name,int* rollno,float* marks)
{
	printf("enter the student details:");
	scanf("%s %d %f",name,rollno,marks);
}
int main()
{
	struct st s1;
	fun_st(s1.name,&s1.rollno,&s1.marks);
	printf("%s\t%d\t%f\n",s1.name,s1.rollno,s1.marks);
}
