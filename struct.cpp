#include<stdio.h>
struct stud
{
	char name[20];
	int roll_no;
	float per;
};
void display(struct stud);
void screen(int,float);
int main()
{
	int i;
	struct stud s={"Debanshi",13,87.5};
	display(s);
	screen(s.roll_no,s.per);
	return 0;
}
void display(struct stud s)
{
	printf("%s\n,%d\n%f",s.name,s.roll_no,s.per);
}
void screen(int p,float n)
{
	printf("%d\n%f\n",p,n);
}
