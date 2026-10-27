// RTPG_9359: vars=8 stmts=3
#include <stdlib.h>
void test_func(void) {
    int cur18 = 9;
    int sum53 = 4;
    int val67 = 35;
    int prev6 = -5;
    int v60 = 7;
    int c95 = 49;
    int a7 = 2;
    int out7 = 9;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        a7 = a7 + 5;
        c95 = prev6 + val67;
        c95 = c95 + 2;
        darr[i] = sum53;
    }
    free(darr);
}
int main() { test_func(); return 0; }

