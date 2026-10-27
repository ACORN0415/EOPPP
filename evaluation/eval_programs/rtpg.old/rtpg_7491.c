// RTPG_7491: vars=9 stmts=2
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int acc33 = 82;
    int hi12 = 4;
    int hi65 = 58;
    int x74 = 42606;
    int sum7 = 46325;
    int a57 = 25;
    double c4 = 56.65;
    int cur92 = 10;
    float res97 = 14.78;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 70; i++) {
        a57 = xn[idx_arr[i]];
        sum7 = c4;
        c4 = c4 - 2;
        darr[i] = a57;
        if (acc33 > 76) {
        acc33 = c4 + 32;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

