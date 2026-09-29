#include<stdio.h>
int main()
{
int n;
int found=0;
scanf("%d",&n);
int a[n];
int c=1;
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
c=c+1;
}
}
if(c>(n/2))
{
printf("%d",a[i]);
found=1;
break;
}
}
if(!found)
{
    printf("-1");
}
return 0;
}
