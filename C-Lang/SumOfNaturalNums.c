#include <stdio.h>

int main()
{
    int i,sum,maxVal;
    sum=0;
    printf("Enter the number upto which you want the sum : ");
    scanf("%d", &maxVal);

    for(i=1;i<=maxVal;i++){
        sum=sum+i;
    }
    printf("The sum of natural numbers upto %d is %d",maxVal,sum);
}