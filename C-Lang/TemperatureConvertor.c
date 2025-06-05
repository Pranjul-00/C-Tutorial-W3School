#include <stdio.h>

// From Fahrenheit to Celcius and Kelvin.

float fromFahrenheit(float fahrenheit)
{
    float cel = (fahrenheit-32)*5/9;
    float kel = cel + 273.15;
    printf("%.2f deg(F) is equal to %.2f deg(C).\n",fahrenheit,cel);
    printf("%.2f deg(F) is equal to %.2f Kelvin(K).",fahrenheit, kel);
}

int main()
{
    float x;
    printf("Enter Temperature in deg(F) : ");
    scanf("%f", &x);
    fromFahrenheit(x);
    return 0;
}




// From Celcius to Fahrenheit and Kelvin.

// float fromCelcius(float Celcius)
// {
//     float fahrenheit, Kelvin;
//     fahrenheit = (Celcius * 9/5) +32;
//     Kelvin = ((fahrenheit - 32) * 5/9) + 273.15;
//     printf("%.2f deg(C) is equal to %.2f deg(F).\n",Celcius, fahrenheit);
//     printf("%.2f deg(C) is equal to %.2f Kelvin(K).",Celcius, Kelvin);
// }

// int main()

// {
//     float Celcius;
//     printf("Enter Temperature in deg(c) : ");
//     scanf("%f", &Celcius);
//     fromCelcius(Celcius);
//     return 0;
//  }




// From Kelvin to Celcius and Fahrenheit.

// float fromKelvin(float Kelvin)
// {
//     float Celcius,fahrenheit;
//     Celcius = Kelvin - 273.15;
//     fahrenheit = (Celcius * 9/5) +32;
//     printf("%.2f Kelvin(K) is equal to %.2f deg(C).\n", Kelvin, Celcius);
//     printf("%.2f Kelvin(K) is equal to %.2f deg(F)", Kelvin, fahrenheit);
// }

// int main()
// {
//     float Kelvin;
//     printf("Enter Temperature in Kelvin(K) : ");
//     scanf("%f", &Kelvin);
//     fromKelvin(Kelvin);
//     return 0;
// }