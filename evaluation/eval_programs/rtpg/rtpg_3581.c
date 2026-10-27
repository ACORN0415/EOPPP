// RTPG_3581: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int x90 = 25;
    int v66 = -23;
    int v29 = 0;
    int cnt48 = 9;
    int x50 = 7;
    int out61 = 17;
    int prev20 = 6;
    int h0 = -32;
    int sv0 = 0;
    int h1 = -38;
    int sv1 = 0;
    int h2 = -18;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x50 = xn[i];
        out61 = v66;
        out61 = v66;
        v66 = cnt48 - 8;
        v66 = out61 * 86;
        yo[i] = v66;
    }
}
int main() { test_func(); return 0; }

