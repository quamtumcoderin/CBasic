#include <stdio.h>

int main() {
    // Create Variables

    int myNum = 15;
    float myFloatNum = 5.99;
    char myLetter = 'D';

    // Format Specifiers

    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My favourite number is: %d\n", myNum);
    printf("My number is %d and my letter is %c\n", myNum, myLetter);

    printf("My favourite number is: %d\n", 15);
    printf("My favourite letter is: %c\n", 'D');

    // Change Variable Values

    myNum = 10;

    int myOtherNum = 23;

    myNum = myOtherNum;
    printf("%d\n", myNum);

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("%d\n", sum);

    // Declare Multiple Variables

    int a = 5, b = 6, c = 7;
    printf("%d\n", a + b + c);

    int d, e, f;
    d = e = f = 50;
    printf("%d\n", d + e + f);

    // Variable Names

    int minutesPerHour = 60; // Good
    int m = 60; // Meh

    // Real-Life Examples

    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);

    int length = 4;
    int width = 6;
    int area;

    area = length * width;

    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d\n", area);

    return 0;
}