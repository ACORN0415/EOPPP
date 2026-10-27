// RTPG_2502: vars=7 stmts=11
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    float b84 = 35.32;
    int cnt63 = 56;
    int b26 = 55;
    int a1 = 46;
    int lo29 = 90;
    float b85 = 53.30;
    double c66 = 87.65;
    int *ptr = &cnt63;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        b85 = xn[i];
        cnt63 = c66 + b85;
        b85 = cnt63;
        a1 = b85 + 7;
        cnt63 = cnt63 + 4;
        lo29 = b84 - -1;
        a1 = b85 + 19;
        b85 = b26 - a1;
        cnt63 = cnt63 + 2;
        lo29 = b84;
        lo29 = b84 + 37;
        b26 = a1;
        *ptr = *ptr + 1;
        darr[i] = a1;
        yo[i] = b26;
    }
    free(darr);
}
int main() { test_func(); return 0; }

