#include <stdio.h>

int main()
{
    int posCount=0, negCount=0, zeroCount=0, num, lastNum;
    int start = 1;
    while(start == 1){
        printf("\nEnter a number: ");
        scanf("%d", &num);
        if(num<0){
            negCount++;
        }
        else if(num > 0){
            posCount++;
        }
        else{
            zeroCount++;
        }
        printf("Positive Count: %d, Negative Count: %d, Zero Count: %d", posCount, negCount, zeroCount);
        if(lastNum == num){
            break;
        }
        lastNum = num;
    }

    return 0;
}