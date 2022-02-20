#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    // printf("Enter the number:");
    scanf("%d",&num);
    int num1=num,i=0;
    while(num1!=0)
    {
        num1/=10;
        i++;
    }
    num1=num;
    int sum=0;
    while(num1!=0)
    {
        int rem=num1%10;
        sum+=pow(rem,i);
        num1/=10;
        i--;
    }
   if(sum==num)
    printf("True");
   else
    printf("False");
}