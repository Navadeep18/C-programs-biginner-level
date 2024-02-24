#include<stdio.h>
void main()
{
float fh,cel;
clrscr();
printf("Enter celsius value\n");
scanf("%f",&cel);
fh=(cel*1.8)+32;
printf("Fahrenheit = %f\n",fh);
printf("Enter fahrenheit value\n");
scanf("%f",&fh);
cel=(fh-32)*5/9;
printf("Celsius = %f\n",cel);
getch();
}