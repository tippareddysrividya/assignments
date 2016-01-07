#include<stdio.h>
int main()
{
	int n,i,j,value=1;
	printf("enter the number of lines:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",value++);
		}
		printf("\n");
	}
 return  0;
}
