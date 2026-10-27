// RTPG_3593: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int tmp83 = 40287;
    int z70 = 3;
    int x27 = 2;
    int cnt18 = 76;
    int i;
    for (i = 0; i < 64; i++) {
        x27 = xn[i];
        x27 = tmp83 + 10;
        tmp83 = cnt18 + z70;
        cnt18 = x27 + z70;
        x27 = tmp83 + cnt18;
        z70 = cnt18;
        tmp83 = tmp83 + 3;
        z70 = x27;
        if (tmp83 == 100) {
        cnt18 = z70 + -2;
        }
        yo[i] = tmp83;
    }
}
int main() { test_func(); return 0; }

