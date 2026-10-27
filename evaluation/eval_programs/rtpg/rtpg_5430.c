// RTPG_5430: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int a61 = 20;
    int cnt83 = 94;
    int cnt52 = 59;
    int res54 = 83;
    int sum74 = 3;
    int y83 = 45621;
    int a27 = 21;
    int cnt45 = 12;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 57; i++) {
        a61 = cnt45 + cnt52;
        cnt83 = cnt83 - 5;
        darr[i] = cnt52;
    }
    free(darr);
}
int main() { test_func(); return 0; }

