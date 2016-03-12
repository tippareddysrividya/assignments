#include <stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[10];
};

void toString(struct student s,int* len,char* temp)
{
    char temp1[10];
    strcat(temp,"\b{\n");
    strcat(temp,"id=");
    sprintf(temp1,"%d",s.id);
    strcat(temp,temp1);
    strcat(temp,"\n");
    strcat(temp,"name=");
    strcat(temp,s.name);
    strcat(temp,"\n}\n");
    *len=strlen(temp);
}


int main()
{
    int len,i;
    struct student s1={101,"vidya"};
    char prettyString[100]=" ";
    toString(s1,&len,prettyString);
    for(i=0;i<len;i++)
    {
        printf("%c",prettyString[i]);
    }
    
    return 0;
}
