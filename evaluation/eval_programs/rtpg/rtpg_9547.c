// RTPG_9547: vars=4 stmts=9
#include <stdlib.h>
void test_func(void) {
    int lo37 = 31737;
    double prev6 = 35.72;
    double z6 = 10.03;
    double cnt83 = 95.99;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 1;
    int sv0 = 0;
    int h1 = 12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        z6 = lo37 + -4;
        cnt83 = prev6;
        prev6 = cnt83;
        z6 = lo37;
        z6 = cnt83 - prev6;
        lo37 = cnt83 + lo37;
        lo37 = cnt83 + cnt83;
        cnt83 = cnt83 + 46221;
        prev6 = prev6;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

