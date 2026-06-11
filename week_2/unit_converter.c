#include <stdio.h>

int main() {
    double km, miles, meters, centimeters;
    double celsius, fahrenheit, kelvin;


    printf("Enter distance in kilometres: ");
    scanf("%lf", &km);

    
    miles = km * 0.621371;
    meters = km * 1000.0;
    centimeters = km * 100000.0; 

    
    printf("\n--- Distance Conversions ---\n");
    printf("Miles:       %.4f\n", miles);
    printf("Metres:      %.2f\n", meters);
    printf("Centimetres: %.2f\n", centimeters);

    
    printf("\nEnter temperature in Celsius: ");
    scanf("%lf", &celsius);

    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    
    printf("\n--- Temperature Conversions ---\n");
    printf("Fahrenheit:  %.2f °F\n", fahrenheit);
    printf("Kelvin:      %.2f K\n", kelvin);

    return 0;
}