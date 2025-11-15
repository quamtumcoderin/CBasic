#include <stdio.h>

int main() {
    // Data Types

    int myNum = 5;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    // Basic Data Types

    // Data Type            Size            Example
    // int                  2 or 4 bytes    1
    // float                4 bytes         1.99
    // double               8 bytes         1.99999999
    // char                 1 byte          'A'

    // Basic Format Specifiers

    // Format Specifier         Data Type
    // %d or %i                 int
    // %f or %F                 float
    // %lf                      double
    // %c                       char
    // %s                       string

    // Characters

    char myGrade = 'A';
    printf("%c\n", myGrade);

    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c\n", c);

    // char myChar = "Hello"; Error
    // printf("%s\n", myChar);

    char myText[] = "Hello";
    printf("%s\n", myText);

    // Numbers

    int myInt = 1000;
    printf("%d\n", myInt);

    float myFloat = 5.75;
    printf("%f\n", myFloat);

    double myDouble = 19.99;
    printf("%lf\n", myDouble);

    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf\n", d1);

    // Decimal Precision

    float myFloat2 = 3.5;
    double myDouble2 = 19.99;

    printf("%f\n", myFloat2);
    printf("%lf\n", myDouble2);

    printf("%f\n", myFloat2);
    printf("%.1f\n", myFloat2);
    printf("%.2f\n", myFloat2);
    printf("%.4f\n", myFloat2);

    // Memory Size

    char myChar;

    printf("%zu Bytes\n", sizeof(myInt));
    printf("%zu Bytes\n", sizeof(myFloat));
    printf("%zu Bytes\n", sizeof(myDouble));
    printf("%zu Byte\n", sizeof(myChar));

    // Real-Life Example

    int items = 50;
    float costPerItem = 9.99;
    float totalCost = items * costPerItem;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %.2f %c\n", costPerItem, currency);
    printf("Total cost: %.2f %c\n", totalCost, currency);

    // Extended Types

    int normalInt = 1000;
    double normalDouble = 3.24;

    short int small = -100;
    unsigned int count = 25;
    long int big = 1234567890;
    long long int veryBig = 2137821738912731823;
    unsigned long long int huge = 1273612783128312132;
    long double precise = 3.141592653589793238L;

    printf("Normal int: %d\n", normalInt);
    printf("Normal double: %lf\n", normalDouble);
    printf("Small: %hd\n", small);
    printf("Unsigned: %u\n", count);
    printf("Big: %ld\n", big);
    printf("Very Big: %lld\n", veryBig);
    printf("Huge: %llu\n", huge);
    printf("Precise: %Lf\n", precise);

    return 0;
}