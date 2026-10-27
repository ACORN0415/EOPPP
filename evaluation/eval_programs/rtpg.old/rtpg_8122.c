// RTPG_8122: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int dat88 = 10;
    int tmp52 = -26;
    int v13 = 51;
    int tmp78 = 36696;
    int dat90 = 8;
    int out88 = 2;
    int c84 = 37;
    int c97 = -49;
    int i;
    for (i = 0; i < 64; i++) {
        dat90 = xn[i];
        c84 = c84 - 36;
        dat88 = c84 - tmp78;
        v13 = tmp78 + 30;
        out88 = dat88 + dat88;
        v13 = c97 + dat88;
        yo[i] = out88;
    }
}
int main() { test_func(); return 0; }

