// RTPG_7325: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int out9 = 11;
    int res87 = 10;
    int v33 = 3;
    int cur39 = 82;
    int cnt95 = 27348;
    int h0 = 44;
    int sv0 = 0;
    int h1 = 38;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out9 = xn[i];
        out9 = v33 + cur39;
        cur39 = cur39 + 4;
        cnt95 = out9 - res87;
        cnt95 = cnt95 - out9;
        yo[i] = v33;
    }
}
int main() { test_func(); return 0; }

