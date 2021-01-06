#include<stdio.h>

int main () {

    int a, b, c, sum;
    float mean;

    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    mean = sum / 3.0;

    printf("The mean of three number is equal to: %.2f", mean);
    return 0;
}
