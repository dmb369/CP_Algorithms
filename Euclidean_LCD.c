// C program to otuput the gcd of two numbers.
// Using Euclidean algorithm for computing the LCD

int gcd (int a, int b)
{
    if (b==0) return a;
    else return gcd(b ,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a*b)/gcd(a,b);
    printf("%d",c);
    return 0;
}