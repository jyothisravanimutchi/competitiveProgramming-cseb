#include<stdio.h>
int main()
{
int n,r;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&r);
 for (int i = 0; i < n - 1; i++) 
 {
for (int j = 0; j < n - 1 - i; j++) {
if (a[j] > a[j + 1]) {                                      
 int temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;
}
}
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
for (int k=j+1;k<n;k++)
{
    if(a[i]+a[j]+a[k]==r)
    printf("%d %d %d\n",a[i],a[j],a[k]);
    }
}
}
return 0;
}
