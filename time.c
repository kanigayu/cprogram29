#include<stdio.h>
int main()
{
int hour,minute;
printf("enter the minute\n");
scanf("%d",&minute);
hour=minute/60;
minute=minute%60;
printf("%d\t%d\t",hour,minute);
return 0;
}
