#include<stdio.h>
int main()
{
    int i,j,row;
    scanf("%d",&row);

    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",'A'-1+i);
    	}
        printf("
");
    }

    return 0;
}