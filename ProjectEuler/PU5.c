/**
 * @file        PU5.c
 * @author      Mehdi Safarian(MayT)
 * @date        2025-04-01
 * @version     1.0
 * @brief       ...
 *
 * @details    largest n-digit palindrom number
 */

 #include <stdio.h>
 
 int isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int productCalc(){
    int LP = 0, num1, num2;
    for (int i=999; i>=100; i--) {
        for (int j=i;j>=100; j--){
            int number = j * i;
            if ((number > LP) && isPalindrome(number)) {
                LP = number;
                printf("%d is a palindromic number.\n", number);
            }
        }
    }
    return 1;
}

int main() {   
    productCalc();
    return 0;
}