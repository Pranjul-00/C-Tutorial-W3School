#include <stdio.h>

int main()

{
    int a,b;
    printf("Enter your first Number : ");
    scanf("%d", &a);
    printf("Enter your Second number : ");
    scanf("%d", &b);
    printf("SUM: %d + %d = %d\n",a,b,a+b);
    printf("DIFFERENCE: %d - %d = %d\n",a,b,a-b);
    printf("PRODUCT: %d X %d = %d\n",a,b,a*b);
    printf("DIVISION: %d / %d = %.2f\n",a,b,(float) a/b);
    printf("REMAINDER: when %d / %d REMAINDER = %d\n",a,b,a%b);
}

//BELOW IS THE SAME CODE WRAPPED IN A FUNCTION.

// #include <stdio.h>

// void calc()
// {
//     int a,b;
//     printf("Enter the number1 followed by number 2 seperated by \'space\' : ");
//     scanf("%d %d", &a, &b);
//     printf("SUM: %d + %d = %d\n",a,b,a+b);
//     printf("DIFFERENCE: %d - %d = %d\n",a,b,a-b);
//     printf("PRODUCT: %d X %d = %d\n",a,b,a*b);
//     printf("DIVISION: %d / %d = %.2f\n",a,b,(float) a/b);
//     printf("REMAINDER: when %d / %d REMAINDER = %d\n",a,b,a%b);
// }

// int main(){
//     calc();
//     return 0;
// }
