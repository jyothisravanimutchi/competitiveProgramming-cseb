#include <stdio.h>
int main()
{
int n;
scanf("%d", &n);
int a[n];
for(int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
int max = a[0], min = a[0];
int b = 0, d = 0;
for(int i = 1; i < n; i++)
{
if(a[i] > max)
{
max = a[i];
b = i;
}
}
for(int i = 1; i < n; i++)
{
if(a[i] < min)
{
min = a[i];
d = i;
}
}
for(int i = 0; i < n; i++)
{
if(i == b)
printf("%d ", a[d]);
else if(i == d)
printf("%d ", a[b]);
else
printf("%d ", a[i]);
}
return 0;
}
