#include<stdio.h>
int main()
{
    int n,r,oc=0,ec=0,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        if(r%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
        n=n/10;
    }
    if(ec==c)
    {
        printf("Even");
    }
    else if(oc==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}