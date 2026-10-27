// RTPG_1900: vars=9 stmts=2
#include <stdlib.h>
void test_func(void) {
    int sum43 = -34;
    int b20 = 4;
    int res29 = 11524;
    int dat50 = 27680;
    int acc24 = -18;
    int x14 = 67;
    int cnt61 = 31;
    int out48 = -12;
    int out7 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 65; i++) {
        sum43 = out7 - out48;
        dat50 = sum43 + acc24;
        darr[i] = sum43;
    }
    free(darr);
}
int main() { test_func(); return 0; }

