// RTPG_8126: vars=3 stmts=8
#include <stdlib.h>
void test_func(void) {
    int x95 = 33;
    int out20 = 29;
    int acc58 = 61508;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 95; i++) {
        switch (out20) {
            case 0: acc58 = 13; break;
            case 1: acc58 = 14; break;
            case 2: out20 = 46; break;
            case 3: acc58 = 46; break;
            default: break;
        }
        out20 = out20 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

