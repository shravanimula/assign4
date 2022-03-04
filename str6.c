#include<stdio.h>
#include<stdlib.h>
struct student{
	int rollno;
	float marks;
};
struct strudent* fun(int r,float m)
{
	struct student *ptr=(struct student *)malloc(sizeof(struct student));
	ptr->rollno=r+1;
	ptr->marks=m+5;
	return ptr;
}
void print_var(struct student *ptr)
{
	printf("%d\t%f\n",ptr->rollno,ptr->marks);
}
int main()
{
	struct student *ptr1, *ptr2;
	ptr1 = fun(1,11);
	ptr2 = fun(2,22);
	print_var(ptr1);
	print_var(ptr2);
	free(ptr1);
	free(ptr2);
	return 0;
}

