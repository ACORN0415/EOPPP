// RTPG_6093: vars=7 stmts=7
#include <stdlib.h>
void test_func(void) {
    int sum86 = 61;
    int c11 = 9;
    int b32 = 51;
    int cnt85 = 15191;
    int cur68 = 49483;
    int tmp73 = 48;
    int cnt19 = -33;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 78; i++) {
        sum86 = cnt19 - cnt19;
        b32 = sum86 + cnt85;
        cur68 = cnt85;
        tmp73 = sum86 + cur68;
        cur68 = cnt85;
        c11 = cur68 + cnt85;
        cnt85 = c11 + tmp73;
        darr[i] = cnt85;
    }
    free(darr);
}
int main() { test_func(); return 0; }

