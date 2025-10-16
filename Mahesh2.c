#include <stdio.h>
/* Task 2 of Lab 8 */
int main() {
    float temp;
    printf("Enter a temperature value: ");
    scanf("%f", &temp);  

    char scale;
    char convert;

    while (getchar() != '\n');

    printf("Choose the input temperature scale (F for Fahrenheit, C for Celsius, K for Kelvin): ");
    scanf("%c", &scale);

    while (getchar() != '\n');  

    printf("Choose the conversion target (F for Fahrenheit, C for Celsius, K for Kelvin): ");
    scanf("%c", &convert);

    if (scale == 'C' && convert == 'F') {
        temp = (temp * 1.8) + 32;
        printf("Converted temperature: %.2f F\n", temp);
    } else if (scale == 'C' && convert == 'K') {
        temp = temp + 273.15;
        printf("Converted temperature: %.2f K\n", temp);
    } else if (scale == 'F' && convert == 'C') {
        temp = (temp - 32) / 1.8;
        printf("Converted temperature: %.2f C\n", temp);
    } else if (scale == 'F' && convert == 'K') {
        temp = (temp - 32) * (5.0 / 9.0) + 273.15;
        printf("Converted temperature: %.2f K\n", temp);
    } else if (scale == 'K' && convert == 'C') {
        temp = temp - 273.15;
        printf("Converted temperature: %.2f C\n", temp);
    } else if (scale == 'K' && convert == 'F') {
        temp = (temp - 273.15) * (9.0 / 5.0) + 32;
        printf("Converted temperature: %.2f F\n", temp);
    } else if (scale == convert) {
        printf("No conversion needed. Temperature: %.2f %c\n", temp, scale);
    } else {
        printf("Invalid scale input.\n");
        return 1;
    }

    float tempC;
    if (convert == 'C') {
        tempC = temp;
    } else if (convert == 'F') {
        tempC = (temp - 32) / 1.8;
    } else if (convert == 'K') {
        tempC = temp - 273.15;
    } else {
        tempC = -9999; 
    }

 
    if (tempC < 0) {
        printf("Temperature category: Freezing\n");
        printf("Weather advisory: Wear a heavy coat and stay warm.\n");
    } else if (tempC >= 0 && tempC < 10) {
        printf("Temperature category: Cold\n");
        printf("Weather advisory: Wear a jacket.\n");
    } else if (tempC >= 10 && tempC < 25) {
        printf("Temperature category: Comfortable\n");
        printf("Weather advisory: Enjoy the weather.\n");
    } else if (tempC >= 25 && tempC < 35) {
        printf("Temperature category: Hot\n");
        printf("Weather advisory: Drink lots of water!\n");
    } else {
        printf("Temperature category: Extreme Heat\n");
        printf("Weather advisory: Stay indoors and avoid strenuous activity.\n");
    }

    return 0;
}
