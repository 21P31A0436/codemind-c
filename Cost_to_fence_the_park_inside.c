#include<stdio.h>
int main()
{
    int L,W,B,C,tc,a;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    a=(L*B)-((L-2*W)*(B-2*W));
    tc=a*C;
    if(L<=2*W || B<=2*W)
    printf("Impossible");
    else
    printf("%d",tc);
}