#include <stdio.h>

void printBits(unsigned int num) {
    
    int numBits = sizeof(unsigned int) * 8;


    for (int i = numBits - 1; i >= 0; i--) {
       
        unsigned int bit = (num >> i) & 1;
        printf("%u", bit);

   
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}
