// Converting decimal number system to balanced ternary system

//Time Complexity: O(log3n)
//Auxiliary Space: O(log3n)

#include <stdio.h>
#include <stdlib.h>

char* decimalToBalancedTernary(int n) {
    int remainder;
    int index = 0;
    char* balancedTernary = malloc(sizeof(char) * 32); // allocate memory for the string
    
    while (n != 0) {
        remainder = n % 3;
        n = n / 3;
        
        if (remainder == 2) {
            n += 1;
            balancedTernary[index++] = '-';
        } else {
            balancedTernary[index++] = remainder + '0';
        }
    }
    
    balancedTernary[index] = '\0';
    strrev(balancedTernary); // reverse the string
    
    return balancedTernary;
}

int main() {
    int n;
    char* balancedTernary;
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    balancedTernary = decimalToBalancedTernary(n);
    printf("Balanced ternary: %s\n", balancedTernary);
    
    free(balancedTernary); // free memory allocated for the string
    
    return 0;
}
