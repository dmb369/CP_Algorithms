// C program to find the number of inverse gray codes

#include <stdio.h>

int rev_g (int g) {
  int n = 0;
  for (; g; g >>= 1)
    n ^= g;
  return n;
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",rev_g(n));
    return 0;
}