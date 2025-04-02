/**
* @file        template.c
* @author      Mehdi Safarian(MayT)
* @date        2025-03-31
* @version     1.0
* @brief       ...
*
* @details    10001th prime number
*/

#include <stdio.h>

int is_prime(int n){
    if (n<2) {
        return 1;
    }
    else if (n==2||n==3) {
        return 0;
    }
    if (n%2==0 || n%3==0) {
        return 1;
    }
    for (int i =5; i*i<=n; i+=2) {
        if (n%i==0){
            return 1;
        }
    }
    return 0;

}

int main() {
    int nth_prime = 10001;
    int largerst_prime = 0;
    int prime_count = 0;

    while (prime_count < nth_prime) {
        largerst_prime++;
        if (is_prime(largerst_prime)==0) {
            prime_count++;
        }
    }

    printf("%d\n", largerst_prime);
    return 0;
}