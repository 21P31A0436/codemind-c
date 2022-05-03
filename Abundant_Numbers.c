#include<stdio.h>
int main()
{
    int num,i;
  //  printf("Enter a number:");
    scanf("%d",&num);
    int sum=0;
    for( i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }

   if(sum>num)
    printf("True");
   else
    printf("False");
}