#include<stdio.h>
int main()
{
    int n,count=1,flag,i=2,j;
    printf("Enter how many num u want to print:");
    scanf("%d",&n);

    while(count<=n)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\t",i);
            count++;
        }
        i++;
    }
}