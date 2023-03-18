// Producing Prime Numbers faster
// Sieve of Eratosthenes

#include <stdio.h>
#include <stdlib.h>

// a program that produces prime numbers less than n

void *sieve(int n)
{
    int *res=malloc(sizeof(int)*(n+1));
    printf("Created an array %d\n",n+1);
    for (int i=0; i<n+1; i++)
    {
        res[i]=1;
    }
    res[0]=0;
    res[1]=0;
    int curr=2;
    while(curr<=n-1)
    {
        if(res[curr]==1)
        {
            int k=2;
            while(curr*k<=n)
            {
                res[curr*k]=0;
                k=k+1;
            }
        }
        curr+=1;
    }
    for (int i=2; i<n+1; i++)
    {
        if (res[i]!=0) printf("%d\n",i);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sieve(n);
    return 0;
}
