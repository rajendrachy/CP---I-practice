//program to print first fibonacci series using loop
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int fib[n];
      fib[0] = 0;
      fin[1] = 1;
      for(int i=2; i<n; i++) {
          fib[i] = fib[i-1] + fib[i-2];
          printf("%d", finb[i]);
      }
      printf("\n");


    return 0;
}