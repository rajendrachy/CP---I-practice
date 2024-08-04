#include <stdio.h>
int main()
{
    int sum, num, mem;
    
    for(int i=1; i<=1000; i++) {
        sum = 0;
        num = i;
        mem = num;
        while(num != 0) {
            int r = num % 10;
            num = num / 10;
            sum = sum + r*r*r;
        }
        if(sum == mem) {
            printf("%d\n", mem);
        }
    }

    return 0;
}