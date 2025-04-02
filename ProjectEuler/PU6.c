/**
* @file        PU6.c
* @author      Mehdi Safarian(MayT)
* @date        2025-04-02
* @version     1.0
* @brief       ...
*
* @details    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20
*/

#include <stdio.h>

// void smallestMultiple(int num){
//     for (int i=1; i<=20; i++) {
//         if (num%i == 0) {
//             if (i==20 && num%i==0) {
//                 printf("%d\n", num);
//                 exit(0);
//             }
//         }else {
//             return;
//         }
//     }
// }
int GCD(int a , int b){
    // Greatest Common Divisor
    if(b){
        return GCD(b, a%b);
    }
    else {
        return a;
    }

}
int LCM(int a, int b){
    // Least Common Multiply 
    // lcm(a,b)= |a.b| / gcd(a,b)
    return (a*b) /GCD(a, b);
}

int main() {
    int min = 2;
    int max = 20;
    int result = min;

    // BRUT FORCE
    // while (1) {
    //     smallestMultiple(number);
    //     number++;
    // }
    for (int i =min; i<=max; i++) {
        result = LCM(result, i);
        printf("%d\n", result);
    }
    return 0;
}