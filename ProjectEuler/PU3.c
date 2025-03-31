/**
 * @file        template.c
 * @author      Mehdi Safarian(MayT)
 * @date        2025-03-31
 * @version     1.0
 * @brief       ...
 *
 * @details    largest prime factor of 600851475143
 */

 #include <stdio.h>
 
 void primeFactors(long n) {
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%ld ", i);
            n = n / i;
        }
    }
    if (n > 2)
        printf("%ld", n);
}

 int main() {
    long number = 600851475143;
    printf("prime factor %ld are: ",number);
    primeFactors(number);          
    return 0;
 }