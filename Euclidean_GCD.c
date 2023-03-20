// C program to otuput the gcd of two numbers.
// Euclidean algorithm for computing the greatest common divisor

int gcd (int a, int b)
{
    if (b==0) return a;
    else return gcd(b ,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=gcd(a,b);
    printf("%d",c);
    return 0;
}