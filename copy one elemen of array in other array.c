#include <stdio.h>
int main()
{
    int a[7], b[7];
    int n;
    scanf("%d", &n);
    for(int i=0; i<=6; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<=6; i++){
        printf("%d", a[i]);
    }
    for(int i=0; i<=6; i++){
        b[i] = a[i];
    }
    printf("The element of b is: ");
    for(int i=0; i<=6; i++){
        printf("%d", b[i]);
    }

    return 0;
}