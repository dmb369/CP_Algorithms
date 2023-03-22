// To find the nth Fibonacci Number
// Fast-Doubling Method

// Time Complexity: O(log(n))
// One of the fastest method to calculate Fibonacci numbers.

#include <stdio.h>

int fast_doub(unsigned long int n) {
    
    if (n<=2){
        return n?1:0;
    }
    else{
        unsigned long int k=(n/2);
        unsigned long int a=fast_doub(k);
        unsigned long int b=fast_doub(k+1);
        return (n%2)?(a*a+(b*b)):(a*(2*b-a));
    }
}

int main()
{
    unsigned long int n;
    scanf("%lu",&n);
    printf("%lu",fast_doub(n));
    return 0;
}