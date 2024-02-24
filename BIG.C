#include<stdio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>=b&&a>=c);
{
printf("big=%d",a);
}
if(b>=a&&b>=c);
printf("big=%d",b);
else
printf("big=%d",c);
getch();
}