#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
};

int main()
{
    struct student s[5];
    char firstname[5][20];
    int len,dotindex=-1,spaceindex=-1;
    int i,j,k,temp;
    for(i=0;i<5;i++)
    {
        scanf("%d\n",&s[i].id);
        scanf("%[^\n]",s[i].name);
    }
    /*for(i=0;i<5;i++)
    {
        printf("%d",s[i].id);
        printf("%s",s[i].name);
    }*/
    for(i=0;i<5;i++)
    {
        len=strlen(s[i].name);
        for(j=0;j<len;j++)
        {
            if(s[i].name[j]=='.')
            {
                dotindex=++j;
                break;
            }
            if(s[i].name[j]==' ')
            {
                spaceindex=--j;
                break;
            }
        }
        temp=0;
        if(dotindex!=-1)
        {
            for(k=dotindex;k<len;k++)
            {
                firstname[i][temp++]=s[i].name[k];
            }
        }
   else
        {
            for(k=0;k<=spaceindex;k++)
            {
                firstname[i][temp++]=s[i].name[k];
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%s",firstname[i]);
    }
    return 0;
}

