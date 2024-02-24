#include<stdio.h>
void main()
{
int rows=5,r,c;
clrscr();
for(r=0;r<rows;r++)
{
for(c=0;c<rows;c++)
{
if(r>0&&r<rows-1&&c>0&&c<rows-1)
{
printf(" ");
}
else
{
printf("* ");
}
}
printf("\n");
}
getch();
}