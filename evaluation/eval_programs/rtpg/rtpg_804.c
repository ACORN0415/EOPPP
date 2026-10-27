// RTPG_804: vars=10 stmts=6
#include <stdlib.h>
void test_func(void) {
    int sum68 = 5040;
    int dat81 = 5;
    int res98 = 75;
    int out93 = 31;
    int cnt61 = -35;
    int prev32 = 37;
    int hi64 = -5;
    int y97 = 5;
    int y84 = 70;
    int lo89 = 18756;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 18; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        hi64 = dat81 - y97;
        y97 = lo89 + prev32;
        res98 = dat81;
        y97 = y97 - 2;
        out93 = out93 + 1;
        sum68 = dat81;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

