// RTPG_5805: vars=5 stmts=4
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int sum43 = 1;
    int lo57 = -16;
    int lo86 = 23191;
    int v42 = 1;
    int b85 = 63165;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 58; i++) {
        switch (sum43) {
            case 0: lo86 = 1; break;
            case 1: lo57 = 57; break;
            case 2: b85 = 38027; break;
            case 3: lo86 = 50; break;
            default: break;
        }
        sum43 = sum43 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

