#include<stdio.h>
void main()
{
int sum_even=0,sum_odd=0,e_count=0,o_count=0,i;
clrscr();
for(i=1;i<=10;i++)
{
if(i%2==0)
{
printf(" even numbers are %d\n",i);
sum_even=sum_even+i;
e_count++;
}
}
printf("Even numbers count=%d\n",e_count);
printf("Even numbers sum=%d\n",sum_even);
for(i=1;i<=10;i++)
{
if(i%2!=0)
{
printf("odd numbers are %d\n",i);
sum_odd=sum_odd+i;
o_count++;
}
}

printf("Odd numbers count=%d\n",o_count);
printf("Odd numbers sum=%d\n",sum_odd);
getch();
}