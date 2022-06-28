#include<stdio.h>
int main()
{
    int arr[100],i,j,n,c,r,k,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
        if(c==1)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
   if(max>0)
   {
        printf("%d",max);
   }
   else{
       printf("-1");
   }
}