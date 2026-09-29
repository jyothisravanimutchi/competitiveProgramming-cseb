#include<stdio.h>
int main()
{
int a,b;
int carry=0;
scanf("%d %d",&a,&b);
while(b!=0)
{
carry=a&b;
a=a^b;
b=carry<<1;
}
printf("%d\n",a);
return 0;
}
