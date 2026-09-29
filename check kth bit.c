#include<stdio.h>
int main()
{
int n,k;
scanf("%d%d",&n,&k);
if(n&(1<<k))
{
printf("1\n");
}
else{
    printf("0\n");
}
return 0;
}
