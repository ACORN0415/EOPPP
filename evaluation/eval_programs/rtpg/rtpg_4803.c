// RTPG_4803: vars=4 stmts=2
#include <stdlib.h>
void test_func(void) {
    int x83 = 48047;
    int y41 = 8;
    int c6 = 14;
    int tmp15 = 14542;
    int *ptr = &x83;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        y41 = y41 - 1;
        c6 = c6 + 5;
        *ptr = *ptr + 5;
        darr[i] = tmp15;
    }
    free(darr);
}
int main() { test_func(); return 0; }

