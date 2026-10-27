// RTPG_97: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int hi13 = 23635;
    int v27 = 38;
    int out83 = 20429;
    int acc70 = 19751;
    int prev18 = 17113;
    int sum27 = 5;
    int c84 = 1;
    int lo38 = -39;
    int cnt6 = 40;
    int h0 = 58;
    int sv0 = 0;
    int h1 = -13;
    int sv1 = 0;
    int h2 = 15525;
    int sv2 = 0;
    int h3 = 71;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc70 = xn[i];
        out83 = v27 + hi13;
        lo38 = lo38 + out83;
        sum27 = out83 + lo38;
        sum27 = v27;
        v27 = out83 - 0;
        yo[i] = sum27;
    }
}
int main() { test_func(); return 0; }

