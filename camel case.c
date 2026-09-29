#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>

int main() {
    int n,i,j,k;
    char s[100][101],a[100][101];
    char p[101],temp[101];
    int count=0,found=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
    scanf("%[^,\n]",s[i]);
    getchar();
    k=0;
    
    for(j=0;s[i][j]!=0;j++)
    {
    if(isupper(s[i][j]))
    a[i][k++]=s[i][j];
    }
    a[i][k]='\0';
    }
    scanf("%s",p);
    for(i=0;i<n;i++)
    {
    if(strncmp(a[i], p, strlen(p)) == 0)
        {
            strcpy(s[count], s[i]);
            strcpy(a[count], a[i]);
            count++;
            found = 1;
        }
    }
     if(!found)
    {
        printf("No match found");
        return 0;
    }

    for(i = 0; i < count - 1; i++)
    {
        for(j = i + 1; j < count; j++)
        {
            if(strcmp(a[i], a[j]) > 0 ||
              (strcmp(a[i], a[j]) == 0 &&
               strcmp(s[i], s[j]) > 0))
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);

                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    for(i = 0; i < count; i++)
        printf("%s\n", s[i]);

    return 0;
}
