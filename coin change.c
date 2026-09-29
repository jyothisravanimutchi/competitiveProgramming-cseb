#include<stdio.h>
#include<stdlib.h>
#define INF 1000000000
int main()
{
int t,n;
scanf("%d%d",&t,&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int *dp = malloc((t + 1) * sizeof(int));
int *coin = malloc((t + 1) * sizeof(int));
for (int i = 0; i <= t; i++) 
{
dp[i] = INF;
coin[i] = -1;
}
dp[0] = 0;
for (int i = 1; i <= t; i++) 
{
for (int j = 0; j < n; j++) 
{
if (a[j] <= i && dp[i - a[j]] != INF) 
{
if (dp[i - a[j]] + 1 < dp[i]) 
{
dp[i] = dp[i - a[j]] + 1;
coin[i] = a[j];
}
}
}
}
if (dp[t] == INF) 
{
printf("-1\n");
} 
else 
{
int value = t;
printf("%d\n", dp[t]);
}
free(dp);
free(coin);
return 0;
}
