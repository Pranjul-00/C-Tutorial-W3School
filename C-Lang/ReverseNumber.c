#include <stdio.h>

int main()

{
    int num;
    printf("Enter the number to be reversed : ");
    scanf("%d", &num);
    int revNum=0;

    while(num)
    {
        revNum = revNum*10 + num%10;
        num /= 10;
    }
    printf("Reverse of the provided number is %d.",revNum);
}