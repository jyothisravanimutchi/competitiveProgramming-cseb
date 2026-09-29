#include<stdio.h>
int gcd(int a,int b)
{
if(a==0)
return b;
if(b==0)
return a;
if(a%2==0 && b%2==0)
return 2*gcd(a/2,b/2);
if(a%2==0)
return gcd(a/2,b);
if(b%2==0)
return gcd(a,b/2);
if(a>b)
return gcd((a-b)/2,b);
if(b>a)
return gcd(a,(b-a)/2);
else
return a;
}
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int n=gcd(a,b);
printf("%d",n);
return 0;
}
