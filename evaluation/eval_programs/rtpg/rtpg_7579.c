// RTPG_7579: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int dat56 = 29;
    int c83 = 42;
    int b4 = 10;
    int h0 = 43538;
    int sv0 = 0;
    int h1 = 49;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b4 = xn[i];
        b4 = b4 * 96;
        c83 = c83 * 19;
        b4 = dat56 + dat56;
        c83 = c83 - dat56;
        b4 = c83 - dat56;
        dat56 = dat56 + 1;
        yo[i] = b4;
    }
}
int main() { test_func(); return 0; }

