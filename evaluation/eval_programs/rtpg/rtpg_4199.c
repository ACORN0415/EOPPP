// RTPG_4199: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int acc65 = 39087;
    int v45 = 49;
    int prev8 = 7;
    int out94 = 99;
    int sum78 = 6;
    int c33 = 0;
    int hi93 = 20320;
    int i;
    for (i = 0; i < 64; i++) {
        acc65 = xn[i];
        sum78 = v45;
        sum78 = sum78 + 3;
        prev8 = hi93 + prev8;
        prev8 = prev8 + 1;
        v45 = v45 - 2;
        yo[i] = prev8;
    }
}
int main() { test_func(); return 0; }

