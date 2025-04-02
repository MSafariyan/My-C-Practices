/**
* @file        template.c
* @author      Mehdi Safarian(MayT)
* @date        2025-03-31
* @version     1.0
* @brief       ...
*
* @details    details
*/

#include <stdio.h>

int is_prime(int n){
    if(n<2){
        return 1;
    }
    if(n==2||n==3){
        return 0;
    }
    if(n%2==0 || n%3==0){
        return 1;
    }
    for (int i=5; i*i<=n; i++) {
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main() {
    long prime_count = 2000000;
    long sum_prime_numbers = 0;
    for (int i=2; i<=prime_count; i++) {
        if (is_prime(i)==0) {
            sum_prime_numbers+=i;
        }
    }  
    printf("%ld\n", sum_prime_numbers);
    return 0;
}