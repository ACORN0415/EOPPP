// RTPG_3652: vars=9 stmts=3
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int v62 = 4;
    int acc51 = 9;
    int res17 = 0;
    int y68 = 36136;
    int tmp46 = 63;
    int cur5 = -14;
    int acc46 = 4194;
    int lo28 = 22883;
    int cnt33 = 2835;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        res17 = tmp46;
        y68 = acc51 - cnt33;
        y68 = v62 - 70;
        }
    }
done:
    acc51 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

