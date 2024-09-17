#include <stdio.h>

int main()
{
    int i =1;
    float num, positive = 0, negative = 0, posAv = 0, negAv = 0;
    int  posCount = 0, negCount = 0;
    while(i == 1){
        printf("\nPlease input a decimal value: ");
        scanf("%f", &num);
        if(num > 0){
            posCount++;
            positive = positive + num;
            posAv = positive/posCount;
            
        }
        else if(num<0){
            negCount++;
            negative = negative + num;
            negAv = negative/negCount;
        } else{
            num = 0;
        }
        if(posCount>0){
            printf("Average of Positive Number = %f", posAv);
        } else{
            printf("No Average of Positive Numbers.");
        }
        if(negCount>0){
            printf("\nAverage of Negative Number = %f", negAv);
        } else{
            printf("\nNo Average of Negative Numbers.");
        }

        
    }

    return 0;
}