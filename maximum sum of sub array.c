#include <stdio.h>
int main()
{
int n;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
scanf("%d", &a[i]);
int max = a[0];
for (int i = 0; i < n; i++)
{
int sum = 0;
for (int j = i; j < n; j++)
{
sum += a[j];
if (sum > max)
max = sum;
}
}
printf("%d", max);
return 0;
}
