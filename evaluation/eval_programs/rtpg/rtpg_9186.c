// RTPG_9186: vars=5 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int lo69 = 3;
    int val89 = -6;
    int res13 = -30;
    int lo13 = 13;
    int v34 = 24;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        lo69 = xn[i];
        v34 = lo13 + 5;
        res13 = lo13 - 24222;
        res13 = res13 + 3;
        lo69 = v34 + lo69;
        val89 = val89 + 5;
        v34 = res13 + v34;
        lo69 = lo69 + v34;
        lo69 = lo69 & res13;
        lo69 = val89 & v34;
        lo13 = res13 + lo13;
        val89 = v34 - val89;
        val89 = lo13 - lo69;
        darr[i] = v34;
        yo[i] = v34;
    }
    free(darr);
}
int main() { test_func(); return 0; }

