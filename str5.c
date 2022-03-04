#include<stdio.h>
struct data{
	int a;
	int b;
};
struct data fun(struct data s)
{
	s.a=s.a+10;
	(s.b)++;
	return s;
}
void fun_variable(struct data s)
{
	printf("%d\t%d\n",s.a,s.b);
}
int main()
{
	struct data s1={10,71};
	struct data s2={20,67};
	s1=fun(s1);
	s2=fun(s2);
	fun_variable(s1);
	fun_variable(s2);
}

