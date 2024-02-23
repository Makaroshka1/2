#include <stdio.h>

int main(int argc, char** argv) {
    int a, b, c, d;
    printf("Input 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);   
    double averageNumber = (a + b + c + d) / 4.0;
    printf("The average number: %.6lf\n", averageNumber);

    int wholePart = (int)averageNumber;
    int rounded = (int)(averageNumber + 0.5);

    printf("The whole part of the average number: %d\n", wholePart);
    printf("Rounded average number: %d\n", rounded);

    return 0;
}
