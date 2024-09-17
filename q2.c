#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Please enter a value for n:  ");
    scanf("%d", &n);
    int count = 0;
    unsigned long long sum = 9;
    int a = INT_MAX;
    int boolean = 0;
    if (n > 1)
    {
        printf("9 + ");
        for (int i = 0; i < n - 1; i++)
        {
            sum = 9 + (sum*10);
            if(sum>INT_MAX){
                printf(".....Overflow detected");
                break;
            }
            if (i == n - 2)
            {
                printf("%llu", sum);
            }
            else
            {
                printf("%llu + ", sum);
            }
        }
    }
    else
    {
        printf("9");
    }
}