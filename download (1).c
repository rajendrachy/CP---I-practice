#include <stdio.h>
int main()
{
    int a[7] = {2, 4, 6, 8, 12, 16, 20};
    int i = 0, j =  7- 1;
    int count = 0;
    int k = 12;

    while(i<j) {
        if(a[i] + a[j] == k) {
            count++;
            i++;
            j--;
        }
       else if(a[i] + a[j] > k) {
            j--;

        }
        else if(a[i] + a[j] > k) {
            i++;
        }
    }
    printf("%d", count);


    return 0;
}