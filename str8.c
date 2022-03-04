#include<stdio.h>
#include<stdlib.h>
struct st{
	char name[20];
	int rollono;
	float marks;
};
int main()
{
	struct st *ptr;
	int i,n;
	printf("enter the number of element:");
	scanf("%d",&n);
	ptr=(struct st*)malloc(n*sizeof(struct st));
	for(i=0;i<n;i++)
	{
		printf("enter a student name:");
		scanf("%s",(ptr+i)->name);
		printf("enter the rollno:");
		scanf("%d",&(ptr+i)->rollono);
		printf("enter the marks:");
		scanf("%f",&(ptr+i)->marks);
	}
	printf("student details are\n");
	for(i=0;i<n;i++)
		printf("%s\t%d\t%f\n",(ptr+i)->name,(ptr+i)->rollono,(ptr+i)->marks);
	free(ptr);
}

