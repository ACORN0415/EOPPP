// RTPG_6153: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int v23 = 23;
    int sum83 = 8390;
    int b94 = 36117;
    int c77 = 26;
    int cnt57 = 8;
    int out57 = 9;
    int z45 = 82;
    int y16 = 4;
    int h0 = 27;
    int sv0 = 0;
    int h1 = 87;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out57 = xn[i];
        c77 = out57 + z45;
        out57 = v23 + c77;
        c77 = v23 * 3;
        b94 = b94 + 3;
        out57 = y16 * 4;
        yo[i] = b94;
    }
}
int main() { test_func(); return 0; }

