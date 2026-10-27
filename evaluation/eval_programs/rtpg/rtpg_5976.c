// RTPG_5976: vars=4 stmts=9
#include <stdlib.h>
void test_func(void) {
    int val32 = 4;
    int c21 = 10349;
    int out29 = 30;
    int a9 = 22;
    int *ptr = &out29;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 54; i++) {
        a9 = a9 - val32;
        c21 = val32 + -27;
        c21 = val32 + c21;
        out29 = c21 + 3;
        val32 = a9 | c21;
        a9 = val32;
        a9 = a9 - c21;
        val32 = c21 + out29;
        a9 = a9 | out29;
        *ptr = *ptr + 4;
        darr[i] = val32;
        if (out29 != 49) {
        a9 = a9 - 3;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

