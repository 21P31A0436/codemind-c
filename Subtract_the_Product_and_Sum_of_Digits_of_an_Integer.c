#include<stdio.h>
int main()
{
    int i,res,n,r,sum=0,d,pr=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    
    while(temp>0)
    {
        r=temp%10;//4
        pr=pr*r;//12
        temp=temp/10;//1
    }
    res=pr-sum;
    printf("%d",res);
   
}