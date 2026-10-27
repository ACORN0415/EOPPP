// RTPG_1582: vars=10 stmts=8
#include <stdlib.h>
void test_func(void) {
    int cur89 = -22;
    float out67 = 30.63;
    int sum96 = 6;
    int tmp7 = -44;
    int res57 = 55631;
    float tmp85 = 53.86;
    int cnt68 = 61;
    int cur69 = -9;
    int acc51 = 53659;
    float hi62 = 54.90;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        cur89 = tmp85;
        res57 = tmp7 - sum96;
        tmp85 = out67 - cur89;
        tmp7 = out67 - acc51;
        out67 = out67 + 5;
        hi62 = hi62 + 46;
        sum96 = hi62;
        hi62 = out67 + hi62;
        darr[i] = res57;
    }
    free(darr);
}
int main() { test_func(); return 0; }

