#include<stdio.h>
void main()
{
int sum_even=0,sum_odd=0,i;
clrscr();
for(i=1;i<=10;i++)
{
if(i%2==0)
{
printf("even numbers=%d\n",i);
}
sum_even=sum_even+i;
printf("sum=%d",sum_even);
if(i%2!=0)
{
printf("odd numbers=%d\n",i);
}
sum_odd=sum_odd+i;
printf("sum=%d",sum_odd);
}
getch();
}
