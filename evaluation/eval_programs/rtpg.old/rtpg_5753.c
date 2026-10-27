// RTPG_5753: vars=3 stmts=7
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int dat77 = 39397;
    int b29 = 7;
    int v78 = 65231;
    int *ptr = &v78;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        dat77 = xn[i];
        v78 = v78;
        b29 = dat77 - 75;
        b29 = dat77 - b29;
        b29 = b29 + v78;
        v78 = dat77 - v78;
        b29 = b29 - 13;
        b29 = b29 - 34;
        *ptr = *ptr + 4;
        darr[i] = dat77;
        yo[i] = dat77;
    }
    free(darr);
}
int main() { test_func(); return 0; }

