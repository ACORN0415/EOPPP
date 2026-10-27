// RTPG_4683: vars=9 stmts=11
#include <stdlib.h>
void test_func(void) {
    int acc2 = 4;
    int x9 = 88;
    int val10 = 14402;
    int tmp55 = 21;
    int cur69 = 44;
    int dat62 = 3;
    int v13 = -47;
    int a40 = 29551;
    int lo60 = 1;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 10;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int h2 = 98;
    int sv2 = 0;
    int i;
    for (i = 0; i < 7; i++) {
        tmp55 = dat62 + x9;
        cur69 = acc2;
        x9 = x9 - 5;
        tmp55 = val10 * 15;
        tmp55 = acc2 - 42050;
        a40 = a40 - 4;
        a40 = a40 - 5;
        dat62 = x9;
        lo60 = tmp55 * -32;
        v13 = v13 * 49;
        val10 = x9 - 43492;
        darr[i] = a40;
    }
    free(darr);
}
int main() { test_func(); return 0; }

