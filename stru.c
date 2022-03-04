#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};
void fun_variable(char name[],int rollno,float marks)
{
	printf("%s\t%d\t%f\n",name,rollno,marks);
}
int main()
{
	struct student s1={"aaaa",1,71};
	fun_variable(s1.name,s1.rollno,s1.marks);
}

