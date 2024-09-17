#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon, term, sum = 1.0, factorial = 1.0;
    int n = 0;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the precision epsilon: ");
    scanf("%lf", &epsilon);

    term = 1; 
    n = 0;


    while (fabs(term) > epsilon) {
        if (n > 0) {
            factorial *= (2 * n - 1) * (2 * n);  
            term *= -x * x / factorial; 
            sum += term;
        }
        printf("Cosine Series Order %d: %.10f\n", n, sum);
        n++;
    }

    printf("Approximate value of cos(%.2f) is: %.10f\n", x, sum);
    return 0;
}
