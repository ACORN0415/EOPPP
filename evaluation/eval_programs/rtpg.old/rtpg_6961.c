// RTPG_6961: vars=8 stmts=5
#include <stdlib.h>
void test_func(void) {
    int z75 = 2;
    int sum89 = 100;
    int cnt80 = 0;
    int lo17 = 2453;
    int x64 = 28;
    int cur4 = 11;
    int a33 = 50;
    int z31 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 38; i++) {
        int j;
        for (j = 0; j < 13; j++) {
        a33 = sum89 + z75;
        z75 = z75 + 3;
        sum89 = x64 + a33;
        cnt80 = x64 - lo17;
        x64 = x64;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

