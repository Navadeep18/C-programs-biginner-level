#include<stdio.h>
void main()
{
int rows=5,r,c,k;
clrscr();
for(r=0;r<rows;r++)
{
for(c=0;c<2*(rows-i)-1;c++)
{
printf(" ");
}
for(k=0;k<2*rows+i;k++)
{
if(k==0||k==2*1||k==rows-1)
{
printf("* ");
}
else
{
printf(" ");
}
}
printf("\n");
}
getch();
}