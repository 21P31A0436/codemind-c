#include<stdio.h>
int main() 
{
    int n,a=0, b=1,next;
    scanf("%d",&n);
    if(n==a||n==b)
    {
    printf("Fibonacci number");
    }
    else
    {
        next = a+b;
        while(next <n)
        {
            a = b;
            b=next;
            next = a+b;
            
        }
        if(next==n)
        printf("True");
        else
        printf("False");
    }
    return 0;
}