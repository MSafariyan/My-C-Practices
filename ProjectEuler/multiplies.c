/**
 * @file        multiplies.c
 * @author      Mehdi Safarian
 * @date        2025-03-31
 * @version     1.0
 * @brief       Project Euler challenge 1
 *
 * @details    If we list all the natural numbers below 10 
 *             that are multiples of 3 or 5, we get 3,5,6 and 9 
 *             The sum of these multiples is 23. 
 *             Find the sum of all the multiples of 3 or 5 below 1000.
 */


#include <stdio.h>


int main() {
    int index = 0;
    for (int i=0; i<1000; i++) {
        if (i%3==0 && i%5== 0) {
            printf("percent of 3,5: %d\n",i);
            index = index + i;
        }
        else if (i%3==0) {
            printf("percent of 3: %d\n",i);

            index = index + i;
        }
        else if (i%5==0) {
            printf("percent of 5: %d\n",i);
            index = index + i;
        }
    }
    printf("%d\n",index);
    return 0;
}