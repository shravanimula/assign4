#include<stdio.h>
struct st{
	char name[10];
	int rollno;
	float marks;
};
void fun(struct st a[])
{
	int i;
	for(i=0;i<3;i++)
		printf("%s\t%d\t%f\n",a[i].name,a[i].rollno,a[i].marks);
}
int main()
{
	struct st a[3]={{"aaaaa",1,11} ,{"bbbb",2,22},{"cccc",3,33}};
       fun(a);
}       
