#include<stdio.h>
void  main()
{
	int n,i,j,k=1;
	printf("enter the no. of lines of triangle:\n");
	scanf("%d",&n);
	printf("the triangle is\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}

}
