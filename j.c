#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
