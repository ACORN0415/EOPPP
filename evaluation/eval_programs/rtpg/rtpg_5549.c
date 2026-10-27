// RTPG_5549: vars=8 stmts=8
#include <stdlib.h>
void test_func(void) {
    int x74 = 25234;
    int dat48 = 32;
    int tmp33 = 35792;
    int x64 = 6;
    int tmp58 = 17097;
    int tmp71 = 26;
    int lo24 = 6;
    int acc60 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 94; i++) {
        tmp58 = dat48 + 5;
        dat48 = acc60 + lo24;
        acc60 = lo24 + x64;
        acc60 = tmp58 + 3;
        tmp58 = tmp58 - 26446;
        tmp33 = tmp71 + acc60;
        x64 = x74 - tmp71;
        x64 = lo24 + tmp58;
        darr[i] = lo24;
    }
    free(darr);
}
int main() { test_func(); return 0; }

