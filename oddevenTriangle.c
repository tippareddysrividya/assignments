#include<stdio.h>
int main()
{
	int n,i,j,odd=1,even=2;
	printf("enter the number of lines :\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",odd);
			odd+=2;
		}
		printf("\n");
	    i++;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",even);
			even+=2;
		}
		printf("\n");
	}
    return  0;
}
