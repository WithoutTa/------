#include <stdio.h>

int main() {
    char ch;
    unsigned long long decimal = 0;

    printf("Enter a binary number as hexadecimal (end with #): ");

while(ch != '#'){
    scanf("%c", &ch);
        if (ch >= '0' && ch <= '9') {
            decimal = decimal * 16 + (ch - '0'); 
        } else if (ch >= 'a' && ch <= 'f') {
            decimal = decimal * 16 + (ch - 'a' + 10);
        } else if (ch >= 'A' && ch <= 'F') {
            decimal = decimal *  16 + (ch - 'A' + 10);
        } else{
            break;
        }
    
}
printf("The decimal equivalent is: %llu\n", decimal);
    
    return 0;
}