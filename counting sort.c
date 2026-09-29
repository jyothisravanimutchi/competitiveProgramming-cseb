#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int count[100]={0};
for(int i=0;i<n;i++)
{
int x;
scanf("%d",&x);
count[x]++;
}
for(int i=0;i<100;i++)
{
while(count[i]>0)
{
printf("%d ",i);
count[i]--;
}
}

return 0;
}
