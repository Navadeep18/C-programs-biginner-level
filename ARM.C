/*Armstrong Number using pow function*/
#include<stdio.h>
#include<math.h>
void main()
{
int num=153,org,n1=3,rem,result=0;
clrscr();
org=num;
while(org!=0)
{
rem=org%10;
result+=pow(rem,n1);
org/=10;
}
if(result==num)
{
printf("%d is armstrong number\n",num);
}
else
{
printf("%d is not a armstrong number",num);
}
getch();
}
