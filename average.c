#include <stdio.h>
int main()
{
    int marks[10],i,n,sum=0;
    double average;
    printf("enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("enter number%d:",i=1);
        scanf("%d",&marks[i]);
        sum +=marks[i];
    }
    average=(double)sum/n;
    printf("average =%21f",average);

return 0;
}

