#include<stdio.h>
void main()
{
int rows=5,r,c,k;
clrscr();
for(r=0;r<=rows;r++)
{
for(c=0;c<=rows-r-1;r++)
{
printf(" ");
}
for(k=0;k<=5;k++)
{
printf("* ");
}
printf("\n");
}
getch();
}