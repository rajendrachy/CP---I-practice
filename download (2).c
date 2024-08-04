#include <stdio.h>
int grt_count(int A[], int k, int n) {
    for(int i=0; i<n; i++) {
        int k = k - A[i];
        int count = count + binary(A, k1, l, u);
        return count;
    }
}

int binary(int A[], int k1, int l, int u) {
   int l1 = lb(A, k1, l, u);
   int u2 = ub(a, k1, l, u);
   return u1-l1+1;
}

int main()
{
    int A[5] {2, 2, 6, 8, 8};
    int k=10;
    int count = 0;
    int n = 5;
    int count = get_count(A, k, n);
    printf("%d", count);

    return 0;
}