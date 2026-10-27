// RTPG_5904: vars=5 stmts=4
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int sum43 = 1;
    int v42 = -16;
    int b85 = 23191;
    int lo57 = 1;
    int lo86 = 63165;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 58; i++) {
        switch (sum43) {
            case 0: b85 = 1; break;
            case 1: v42 = 57; break;
            case 2: lo86 = 38027; break;
            case 3: b85 = 50; break;
            default: break;
        }
        sum43 = sum43 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

