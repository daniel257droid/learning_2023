#include <stdio.h>

void findSmallestAndLargestDigits(int n) {
    int i, num, smallest = 9, largest = 0;

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

     if(num<10) printf("Not valid\n");
     else{
        while (num > 0) {
            int digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
        smallest = 9, largest = 0;
     }
   }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    findSmallestAndLargestDigits(n);
    return 0;
}