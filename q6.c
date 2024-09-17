#include <stdio.h>
#include <math.h>

int main() {
    double x, precision, currentTerm, sum = 0.0, lastSum;
    int order = 0;

    printf("Please enter a value for x (between -1 and 1, exclusive): ");
    scanf("%lf", &x);
    if (x <= -1 || x >= 1) {
        printf("The value of x must be between -1 and 1 exclusive.\n");
        return 0;
    }
    printf("Please enter a precision value for a: ");
    scanf("%lf", &precision);

    currentTerm = 1.0;
    sum = currentTerm;
    printf("Taylor Series 1 / (1 - x) 0th Order Sum = %.5lf\n", sum);

    do {
        lastSum = sum;
        currentTerm *= x;
        sum += currentTerm; 
        order++;
        printf("Taylor Series 1 / (1 - x) %dth Order Sum = %.5lf\n", order, sum);
    } while (fabs(sum - lastSum) > precision && order < 20); 

    return 0;
}