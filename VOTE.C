#include<stdio.h>
void main()
{
int age=9;
clrscr();
printf("Enter the age\n");
if(age>=18)
printf("Eligible for vote\n");
else
printf("Not eligible for vote\nYou are eligible after %d years",18-age);
getch();
}