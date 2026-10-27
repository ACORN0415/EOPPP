// RTPG_4401: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int v91 = 50615;
    int out57 = 1;
    int z85 = 18018;
    int lo81 = 24;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 39729;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo81 = xn[i];
        lo81 = lo81 + 5;
        lo81 = z85 + 91;
        z85 = v91 + v91;
        out57 = z85;
        out57 = out57 * 48051;
        yo[i] = out57;
    }
}
int main() { test_func(); return 0; }

