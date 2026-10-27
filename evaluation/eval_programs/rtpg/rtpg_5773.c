// RTPG_5773: vars=8 stmts=5
int xn[16];
int yo[16];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int b70 = 99;
    int x82 = 28;
    int sum63 = 3;
    int dat61 = 16684;
    int a47 = 28859;
    int x50 = 69;
    int x99 = 29920;
    int cur2 = 0;
    struct Data s; s.a = 3; s.b = 39;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a47 = xn[i];
        x82 = dat61;
        dat61 = x82 - dat61;
        a47 = a47 + b70;
        sum63 = sum63 + 4;
        dat61 = sum63 % b70;
        s.a = s.a + s.b;
        darr[i] = x82;
        yo[i] = cur2;
    }
    free(darr);
}
int main() { test_func(); return 0; }

