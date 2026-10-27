// RTPG_82: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int y69 = 12;
    int c3 = 23;
    int out24 = 15721;
    int i;
    for (i = 0; i < 64; i++) {
        c3 = xn[i];
        y69 = c3 + 5;
        out24 = c3;
        out24 = out24 + 3;
        y69 = y69 + c3;
        out24 = out24 + y69;
        c3 = c3 % y69;
        c3 = out24 - -34;
        yo[i] = y69;
    }
}
int main() { test_func(); return 0; }

