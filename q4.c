#include <stdio.h>
#include <float.h>

int main()
{
    float num, smallest, secondSmall, thirdSmall, large;
    int count = 0, n, countN=0;

    printf("input n, the largest unchanged number >= 3:");
    scanf("%d", &n);
    if (n < 3) {
        printf("n must be at least 3.\n");
        return 0;
    }
    int start = 1;
    while(start == 1){
        if(count==0){
        printf("\nEnter a decimal numbers: ");
        scanf("%f", &num);
        smallest = num, secondSmall = num, thirdSmall = num, large = num;
        count++;
        printf("Count: %d - smallest: %f - second_smallest: %f - third_smallest: %f - largest: %f", count, smallest, secondSmall, thirdSmall, large);
        }
        printf("\nEnter a decimal numbers: ");
        scanf("%f", &num);
        count++;
        if (num < smallest) {
                thirdSmall = secondSmall;
                secondSmall = smallest;
                smallest = num;
            } else if (num < secondSmall) {
                thirdSmall = secondSmall;
                secondSmall = num;
            } else if (num < thirdSmall) {
                thirdSmall = num;
            } else{
                if(num>smallest&&count<=2){
                    secondSmall = thirdSmall = num;
                } 
                else if(count == 3 && num>secondSmall){
                    thirdSmall = num;
                }
            }

        if(num>large){
            large = num;
            countN=0;
        } else{
            countN++;
        }

        printf("Count: %d - smallest: %f - second_smallest: %f - third_smallest: %f - largest: %f", count, smallest, secondSmall, thirdSmall, large);
        if(countN>= n-1){
            printf("\nLargest have been repeated %d times", n);
            break;
        }
    }
    
}