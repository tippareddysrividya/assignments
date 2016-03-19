//
//  knapsack.c
//  
//
//  Created by R.M.D. Engineering College on 19/03/16.
//
//

#include <stdio.h>
int main()
{
    int capacity,i,j,n,k,tot_value,tot_weight;
    int wei_val[10][10];
    int count[10];
    printf("enter the knapsack capacity:");
    scanf("%d",&capacity);
    printf("enter the no of sacks:");
    scanf("%d",&n);
    printf("enter the values and count of sacks:");
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&wei_val[0][i],&count[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("enter the weights of %d:",wei_val[0][i]);
        for(j=0;j<count[i];j++)
        {
            scanf("%d",&wei_val[j+i][i]);
        }
    }
    
    while( k < n )
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<count[i];j++)
            {
                tot_weight = tot_weight + wei_val[j+1][i];
                tot_value  = tot_value  + wei_val[0][i];
            }
        }
        if(tot_value <= capacity)
        {
            break;
        }
    }
    
    return 0;
}
