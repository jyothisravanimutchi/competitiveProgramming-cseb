#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a>b)
{
a=a+b;
b=a-b;
a=a-b;
}
int max=0;
for(int i=a;i<=b;i++)
{
long long n=i;
int c=1;
while(n!=1)
{
if(n%2==0)
n=n/2;
else
n=(3*n)+1;
c++;
}
if(max<c)
max=c;
}
printf("%d %d %d",a,b,max);
return 0;
}
