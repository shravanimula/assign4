#include<stdio.h>
struct student{
	char name[20];
	int rollno;
	float marks;
};
void fun_variable(struct student *s)
{
	printf("%s\t%d\t%f\n",s->name,s->rollno,s->marks);
}
int main()
{
	struct student s1={"aaaa",1,71};
	struct student s2={"bbbbb",2,67};
	fun_variable(&s1);
	fun_variable(&s2);
}

