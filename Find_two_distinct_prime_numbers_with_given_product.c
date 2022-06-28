#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(i*j==n)
            {
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    printf("-1");
}