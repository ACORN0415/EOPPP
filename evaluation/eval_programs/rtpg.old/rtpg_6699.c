// RTPG_6699: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int res8 = 34532;
    int cur43 = 40;
    int v36 = 44;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = -29;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        switch (v36) {
            case 0: cur43 = -43; break;
            case 1: res8 = 56469; break;
            case 2: res8 = 43; break;
            default: break;
        }
        v36 = v36 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

