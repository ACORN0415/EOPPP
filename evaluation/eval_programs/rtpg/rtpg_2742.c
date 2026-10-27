// RTPG_2742: vars=9 stmts=3
int idx_arr[64];
void test_func(void) {
    int z16 = 28758;
    int sum8 = 1;
    int lo14 = 31;
    int acc77 = 2;
    int acc14 = -19;
    int prev40 = 76;
    int y96 = 77;
    int acc93 = 10;
    int sum56 = 52;
    int h0 = 11;
    int sv0 = 0;
    int h1 = -50;
    int sv1 = 0;
    int h2 = 41;
    int sv2 = 0;
    int h3 = -21;
    int sv3 = 0;
    int i;
    for (i = 0; i < 70; i++) {
        sum8 = xn[idx_arr[i]];
        prev40 = acc77 + sum8;
        acc14 = sum8 - 6;
        z16 = acc14 * 2;
        if (lo14 <= -25) {
        prev40 = prev40 - acc14;
        }
    }
}
int main() { test_func(); return 0; }

