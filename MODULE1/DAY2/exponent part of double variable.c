#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>

void print_exponent_parts(double x) {
    uint64_t bits;
    memcpy(&bits, &x, sizeof(bits));

    uint64_t exponent = (bits >> 52) & 0x7FF;

    char hex_exponent[16];
    sprintf(hex_exponent, "0x%" PRIx64, exponent);
    

    char binary_exponent[13];
    for (int i = 0; i < 11; i++) {
        binary_exponent[i] = (exponent >> (10 - i)) & 1 ? '1' : '0';
    }
    binary_exponent[11] = '\0';

    printf("Exponent in hexadecimal: %s\n", hex_exponent);
    printf("Exponent in binary: 0b%s\n", binary_exponent);
}

int main() {
    double x = 0.7;
    print_exponent_parts(x);
    return 0;
}
