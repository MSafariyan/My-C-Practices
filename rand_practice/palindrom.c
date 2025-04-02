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
 
 int isPalindrome(int num) {
    int original = num, reversed = 0, remainder;
    
    while (num > 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return original == reversed;
}

int main() {
    int num = 910019;
    
    if (isPalindrome(num))
        printf("%d is a palindromic number.\n", num);
    else
        printf("%d is NOT a palindromic number.\n", num);
    
    return 0;
}