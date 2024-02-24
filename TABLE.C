
#include<stdio.h>
void main()
{
int i=1,n=5,product;
clrscr();
printf("The 5th table is\n");
for(i=1;i<=10;i++)
{
product=n*i;
printf("%d * %d=%d\n",n,i,product);
}
getch();
}
