#include<stdio.h>
int main()
{
    int arr[100000],i,n,p=0,r,c,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
       int c=0,k=0;
        while(arr[i]!=0)
        {
            r=arr[i]%10;
            k++;
            arr[i]=arr[i]/10;
        }
        if(k%2==0)
        {
            p++;
        }
    }
    printf("%d",p);
}