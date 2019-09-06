#include<stdio.h>
int main()
{
int i;
printf("enter the captain of india team \n 0=dhoni \n 1=virat \n 2=gangoli \n 3=sachin");
scanf("%d",&i);
switch (i)
{
case 0:
printf("wrong answer");
break;
case 1:
printf("correct answer");
break;
case 2:
printf("wrong answer");
break;
case 3:
printf("wrong answer");
break;
default;
printf("enter range only 0 to 3");
}
}
