#include <stdio.h>
int main()
{
int n,i,f=1;
printf("enter a number: \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
printf("Factorial of %d=%d\n",n,f);
}
return 0;
}
