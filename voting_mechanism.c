
#include <stdio.h>
int main()
{
    int i,n,vote,win_index=0;
    char status = 'y',mem[10][20];
    int count[10];
    printf("enter the number of members");
    scanf("%d",&n);
    printf("please enter the party names:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",mem[i]);
    }

    do
    {
        printf("these are the parties available\n");
        for(i=0;i<n;i++)
        {
            printf("%d.%s\n",i+1,mem[i]);
        }
        printf("please give your vote ");
        scanf("%d",&vote);
        ++count[vote-1];
        printf("do you want to vote(y/n)");
        getchar();
        status = getchar();
    }while(status =='y');
    for(i=0;i<n;i++)
    {
        if(count[i]>win_index)
        {
            win_index = count[i];
        }
    }
    printf("\n%s is the winner\n",mem[win_index]);
    return 0;
}
