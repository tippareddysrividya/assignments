#include<stdio.h>
#include<stdbool.h>
void printArray (int arr[],int n);
int checkfor9s(int num[],int n );
void nextpalindrome(int num[],int n);
void nextpalindrome1(int num[],int n);

int main()
{   
    
    long int temp,n;
    int count=0,i;
    int num[20];
    scanf("%ld",&n);
    temp=n;
    while(temp>0)
    {
        ++count;
        temp/=10;
    }
    for(i=count-1;i>=0;i--)
    {
        num[i]=n%10;
        n/=10;
    }
    for(i=0;i<count;i++)
    {
        printf("%d",num[i]);
    }
    nextpalindrome(num,count);
    return 0;
}

void printArr(int arr[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
        printf("\n");
}

void nextpalindrome1(int num[],int n )
{
    int mid=n/2;
    bool leftsmaller=false;
    int i=mid-1;
    int j=(n % 2)?mid+1:mid;
    while (i>=0 && num[i]==num[j])
    {
        i--;
        j++;
    }
    if ( i<0 || num[i]<num[j])
        leftsmaller=true;
    while (i>=0)
    {
        num[j]=num[i];
        j++;
        i--;
    }
    if (leftsmaller==true)
    {
        int carry=1;
        i=mid-1;
        if(n%2==1)
        {
            num[mid]+=carry;
            carry=num[mid]/10;
            num[mid]%=10;
            j=mid+1;
        }
        else
            j=mid;
        while(i>=0)
        {
            num[i]+=carry;
            carry=num[i]/10;
            num[i]%=10;
            num[j++]=num[i--]; 
        }
    }
}
 
void nextpalindrome(int num[],int n )
{
    int i;
    printf("\nNext palindrome is:\n");
    if(checkfor9s(num,n))
    {
        printf( "1 ");
        for(i=1; i<n;i++)
            printf("0 ");
        printf("1");
    }

    else
    {
        nextpalindrome1(num,n);
        printArr(num,n);
    }
}
 
int checkfor9s(int* num,int n)
{
    int i;
    for(i=0;i<n;++i)
        if(num[i]!=9)
            return 0;
    return 1;
}

