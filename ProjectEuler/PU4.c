/**
 * @file        PU4.c
 * @author      Mehdi Safarian(MayT)
 * @date        2025-04-01
 * @version     1.0
 *
 * @details    Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 */

 #include <stdio.h>
 
 void sqrtSum(int num){
    int last_number = num;
    int sum_natrual_numbers = 0;
    int sum_sqrt_na_num = 0; 
    for (int i=1; i<=last_number; i++) {
        sum_natrual_numbers += i;
        sum_sqrt_na_num = (i * i) + sum_sqrt_na_num ;
    }
    sum_natrual_numbers = sum_natrual_numbers * sum_natrual_numbers;
    printf("%d\n", sum_natrual_numbers - sum_sqrt_na_num);
 }
 
 int main() {
    int num = 100;
    sqrtSum(num); 
    return 0;
 }