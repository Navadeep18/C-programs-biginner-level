#include<stdio.h>
void main()
{
int n1,n2;
clrscr();
printf("Enter any two numbers\n"),
scanf("%d%d",&n1,&n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;
printf("Swapped numbers:",n1,n2);
getch();
}