// RTPG_9377: vars=5 stmts=8
#include <stdlib.h>
void test_func(void) {
    int acc89 = 100;
    int cnt52 = 35;
    int cnt36 = 47812;
    int a33 = 6631;
    int cur26 = 14438;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        int j;
        for (j = 0; j < 6; j++) {
        a33 = a33 - 57;
        acc89 = acc89 - 1;
        cnt36 = cnt36 + 4;
        a33 = cnt36 - cnt52;
        cnt36 = a33 + cur26;
        cnt52 = cnt36;
        cnt36 = cnt36;
        acc89 = cnt52;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

