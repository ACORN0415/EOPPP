// RTPG_9765: vars=4 stmts=6
int xn[32];
int yo[32];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int out55 = 13694;
    int dat9 = 56879;
    int cur20 = -30;
    int v99 = 73;
    struct Data s; s.a = -47; s.b = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -16;
    int sv0 = 0;
    int h1 = 32;
    int sv1 = 0;
    int i;
    for (i = 0; i < 74; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        out55 = cur20;
        out55 = out55 + 1;
        out55 = out55 + 2;
        out55 = out55 + cur20;
        dat9 = out55;
        dat9 = dat9 - -42;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

