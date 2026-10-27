// RTPG_5070: vars=8 stmts=4
#include <stdlib.h>
void test_func(void) {
    int a20 = 4421;
    int res32 = 16868;
    int dat97 = 30801;
    int dat64 = 5;
    int tmp44 = -43;
    int y58 = 10;
    int z54 = 52852;
    int dat49 = 971;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 43;
    int sv0 = 0;
    int h1 = 68;
    int sv1 = 0;
    int h2 = -9;
    int sv2 = 0;
    int h3 = 94;
    int sv3 = 0;
    int i;
    for (i = 0; i < 44; i++) {
        tmp44 = a20;
        dat64 = tmp44;
        dat97 = dat49 + a20;
        dat97 = dat49 * 65;
        darr[i] = y58;
    }
    free(darr);
}
int main() { test_func(); return 0; }

