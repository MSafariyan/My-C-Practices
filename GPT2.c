/**
 * @file        template.c
 * @author      Mehdi Safarian(MayT)
 * @date        2025-03-31
 * @version     1.0
 * @brief       ...
 *
 * @details    reverse string
 */

 #include <stdio.h>
 #include <string.h>

 
 int main() {

    
    // char vorodi[];
    char mamad[10];
    scanf("%s",mamad);

    int len_mamad = strlen(mamad);
    printf("%d\n", len_mamad);
    for (int i=len_mamad-1; i>=0; i--) {
        printf("%c",mamad[i]);
    }
    printf("\n");
     return 0;
 }
 