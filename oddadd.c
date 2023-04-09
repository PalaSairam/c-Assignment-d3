#include <stdio.h>

int main() {
    int n, s= 0;
    
    printf("Enter a value for n: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        s += (2 * i) - 1; 
    }
    
    printf("The sum of the first %d odd numbers is %d\n", n, s);
    
    if (s == n * n) {
        printf("The sum of the first %d odd numbers is equal to %d^2.\n", n, n);
    } else {
        printf("The sum of the first %d odd numbers is not equal to %d^2.\n", n, n);
    }
    
    return 0;
}