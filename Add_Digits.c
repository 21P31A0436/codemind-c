#include<stdio.h>

int main()
{
    int n,r, sum;
    scanf("%d", &n) ;
    if(n<10)
    {
    printf("%d",n);
    }
    else
    {
    while(n>9) 
    {
    sum=0;
    while(n>0) 
    {
    r=n%10;
    n=n/10;
    sum=sum+r;
    }
   n=sum;
 }
}
printf("%d", sum) ;
    
    
    return 0;
}