#include<stdio.h>
void main()
{
int a=3,b=10,temp;
clrscr();
printf("before swapping:%d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping:%d %d",a,b);
getch();
}
