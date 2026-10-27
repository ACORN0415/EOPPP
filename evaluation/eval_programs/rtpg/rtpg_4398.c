// RTPG_4398: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int tmp34 = -38;
    int hi30 = 8;
    int out29 = 13;
    float z62 = 77.58;
    float val94 = 89.34;
    int lo34 = 46493;
    int cnt2 = -17;
    float lo36 = 73.45;
    int cur4 = 57465;
    int c28 = 7;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 54; i++) {
        z62 = hi30 + z62;
        lo36 = cnt2;
        tmp34 = hi30 + val94;
        cur4 = z62 - 37;
        darr[i] = z62;
        if (cnt2 > -24) goto done;
    }
done:
    c28 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

