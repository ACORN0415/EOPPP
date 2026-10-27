// RTPG_3601: vars=4 stmts=7
#include <stdlib.h>
void test_func(void) {
    float cur35 = 50.85;
    int v85 = -10;
    double b75 = 6.21;
    int cur42 = 0;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 88; i++) {
        b75 = b75 % cur42;
        b75 = b75 + cur35;
        v85 = cur35 ^ cur35;
        cur35 = b75;
        b75 = b75 + 7;
        cur42 = b75 + cur35;
        b75 = v85 | cur42;
        darr[i] = cur35;
    }
    free(darr);
}
int main() { test_func(); return 0; }

