// RTPG_6578: vars=7 stmts=9
#include <stdlib.h>
void test_func(void) {
    int dat34 = 83;
    int cur31 = 24157;
    int x61 = 1;
    int v87 = -39;
    int lo18 = 36063;
    int out34 = 7;
    int a83 = 26;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 94; i++) {
        lo18 = dat34 - lo18;
        dat34 = dat34 + 4;
        dat34 = cur31;
        dat34 = x61 - out34;
        lo18 = lo18 - a83;
        out34 = out34 - 4;
        cur31 = cur31 + cur31;
        v87 = dat34 + 11934;
        dat34 = dat34 + 5;
        darr[i] = out34;
        if (lo18 >= 11) {
        v87 = lo18 + 11429;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

