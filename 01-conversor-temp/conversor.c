#include <stdio.h>
const float FATOR_FAHRENHEIT = 1.8;
const float CALC_FAHRENHEIT = 32.0;
const float CALC_KELVIN = 273.15;

float conversaoFahrenheit(float celsius)
{
    return (celsius * FATOR_FAHRENHEIT) + CALC_FAHRENHEIT;
}

float conversaoKelvin(float celsius)
{
    return celsius + CALC_KELVIN;
}

int main()
{
    float celsius;
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Informe a %dª temperatura em Celsius: ", i);
        scanf("%f", &celsius);

        printf("Fahrenheit: %.2f\n", conversaoFahrenheit(celsius));
        printf("Kelvin: %.2f\n\n", conversaoKelvin(celsius));
    }

    return 0;
}
