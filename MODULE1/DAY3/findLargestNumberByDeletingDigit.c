#include <stdio.h>

int findLargestNumberByDeletingDigit(int number) {
    int largestNumber = 0;
    int divisor = 1;
    while (divisor <= number) {
        int newNumber = number / (divisor * 10) * divisor + number % divisor;
        if (newNumber > largestNumber) {
            largestNumber = newNumber;
        }
        divisor *= 10;
    }
    return largestNumber;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    if (number >= 1000 && number <= 9999) {
        int largestNumber = findLargestNumberByDeletingDigit(number);
        printf("The largest number after deleting a single digit: %d\n", largestNumber);
    } else {
        printf("Invalid input. Please enter a 4-digit number.\n");
    }
    return 0;
}