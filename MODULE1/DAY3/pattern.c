#include <stdio.h>

void printAscending(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    for (int i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printDescending(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern(int n) {
    int a=0;
    for (int i = n; i >= 1; i--) {
        printAscending(i);
        printSpaces(a);
        printDescending(i);
        printf("\n");
        a=a+2;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}