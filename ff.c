#include <stdio.h>
#include<string.h>
int main()
{
    int num,t,b,i=0,m[10],l;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter no of digits want to be delete : ");
    scanf("%d",&t);
    b=num;
    while(b>0)
    {
        m[i]=b%10;
        i++;
        b=b/10;
    }
    l=i-t-1;
    printf("number = ");
    for(i=l;i>=0;i--)
    {
        printf("%d",m[i]);
    }
    return 0;
}
