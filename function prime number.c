#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    int sqrt_n = (int)sqrt(n);
    for (int i = 3; i <= sqrt_n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
