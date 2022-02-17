#include<stdio.h>
int main()
{
    int l,b,w,c,area,l2,b2,tc;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    l2=l+(2*w);
    b2=b+(2*w);
    area=(l2*b2)-(l*b);
    tc=area*c;
    if(tc>0);
    printf("%d",tc);
    return 0;
}