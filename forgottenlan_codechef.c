#include <stdio.h>
#include <string.h>
int main()
{
    int i, t, n, k, l, n1, j=1;
    char *a[20];
    char b[20];
    scanf("%d", &t);
    while(t--) {
    scanf("%d", &n);
    scanf("%d", &k);
    fflush(stdin);
    for(i = 0; i < n; i++)
    {
        a[i]=(char *)malloc(sizeof(char)*6);
        scanf("%s",a[i]);
    }
    int flag[20]={0};
    for(i = 0; i < k; i++)
    {
        scanf("%d", &n1);
        for(j=0;j<n1;j++)
        {
            fflush(stdin);
            scanf("%s",b);
            for(l = 0; l < n; l++)
            {
                if(strcmp(b,a[l])==0)
                {
                    flag[l]=1;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(flag[i])
            printf("YES ");
        else
            printf("NO ");
    }
    }
    return 0;
}
