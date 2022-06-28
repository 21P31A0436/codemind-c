#include<stdio.h>
int main()
{
    int arr[100],n,i,r,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    r=n/2;
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>r)
        {
            printf("%d ",arr[i]);
            break;
        }
    }
}