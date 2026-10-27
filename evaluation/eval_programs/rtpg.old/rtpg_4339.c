// RTPG_4339: vars=4 stmts=3
#include <stdlib.h>
void test_func(void) {
    int x52 = 6;
    int v33 = 30895;
    int x6 = 0;
    int c68 = 85;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 28; i++) {
        switch (c68) {
            case 0: x52 = -44; break;
            case 1: x52 = 5; break;
            default: break;
        }
        c68 = c68 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

