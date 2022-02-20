#include<stdio.h>
#include<math.h>
int main()
{
    int n,result,x,m,res;
    scanf("%d%d%d",&x,&n,&m);
    result=pow(x,n);
    res=result%m;
    printf("%d",res);
    
}