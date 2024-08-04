#include <stdio.h>
int main()
{
    int n, arm = 0, c;
    scanf("%d", &n);
    c=n;
    while(n != 0) {
        int r = n % 10;
        arm = arm + (r*r*r);
        n = n / 10;

    }
    if(c==arm) {
        printf("Armstrong\n");
    } else {
        printf("Not armstrong\n");
    }

    return 0;
}