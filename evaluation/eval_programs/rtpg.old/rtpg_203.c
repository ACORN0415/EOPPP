// RTPG_203: vars=7 stmts=3
#include <stdlib.h>
void test_func(void) {
    int dat35 = 2;
    int hi50 = 1871;
    int hi32 = 5;
    int cnt39 = 2;
    int z24 = 37131;
    int a98 = 8;
    int val46 = 48;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 39; i++) {
        cnt39 = cnt39 ^ hi50;
        z24 = cnt39 & cnt39;
        hi32 = hi50 + 25;
        darr[i] = a98;
    }
    free(darr);
}
int main() { test_func(); return 0; }

