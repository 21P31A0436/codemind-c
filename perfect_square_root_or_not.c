// find perfect squre root

#include<stdio.h>
#include<math.h>
int main()
{
	int n,a;
	
	//printf("Enter the value of N:
");
	scanf("%d",&n);
	a=sqrt(n);
	if(n-(a*a)==0)
		printf("True");
	else
		printf("False");
    return 0;
}

