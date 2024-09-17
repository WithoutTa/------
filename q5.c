#include <stdio.h>

int main()
{
    char c;
    while(1){
        printf("\nPlease enter a character: ");
        scanf("%c", &c);
        getchar();
        if(c == 'a' || c =='e' || c =='i' || c =='o' || c =='u'){
            printf("Character %c is a vowel", c);
        } else if(c == '#'){
            printf("Bye!");
            break;
        } else{
            printf("Character %c is a consonant", c);
        }
    }

    return 0;
}