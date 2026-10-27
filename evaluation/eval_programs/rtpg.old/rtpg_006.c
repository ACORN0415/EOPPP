// RTPG_6: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int out92 = 44425;
    int a83 = 94;
    int v55 = 86;
    int i;
    for (i = 0; i < 64; i++) {
        out92 = xn[i];
        v55 = out92 + v55;
        out92 = out92 + a83;
        v55 = v55 - v55;
        if (out92 >= 40) {
        v55 = v55 - out92;
        }
        yo[i] = v55;
    }
}
int main() { test_func(); return 0; }

