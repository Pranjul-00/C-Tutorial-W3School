#include <stdio.h>

int main()

{
    int i=1;
    int x;
    printf("Enter a number : ");
    scanf("%d", &x);
    printf("The table of %d is given below.\n",x);
    while (i<=10)
    {
        printf("%d X %d = %d\n",x,i,x*i);
        i++;
    }
}

// Using for Loop

// {
//     int i,x;
//     printf("Enter a number : ");
//     scanf("%d", &x);
//     printf("The table of %d is given below.\n",x);
//     for (i=1; i<=10; i++)
//     {
//         printf("%d X %d = %d\n",x,i,x*i);
//     }
// }