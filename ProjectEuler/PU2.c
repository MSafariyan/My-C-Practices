/**
 * @file        PU2.c
 * @author      Mehdi Safarian(MayT)
 * @date        2025-03-31
 * @version     1.0
 * @brief       ...
 *
 * @details    sum of even numbers in fibonacci sequence
 */

 #include <stdio.h>
  
 int main() {
    int sum = 0;
    int a = 1;
    int b = 2;
    while (b < 4000000) {
        int next = a + b;
        if (b%2 == 0) {
            sum+=b;
        }
        a = b;
        b = next;
    }
    return 0;
 }
 