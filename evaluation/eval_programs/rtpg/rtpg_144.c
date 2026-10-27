// RTPG_144: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int y57 = 1;
    int cnt71 = 92;
    int a68 = 14;
    int acc29 = -18;
    int v62 = -23;
    int h0 = 50391;
    int sv0 = 0;
    int h1 = 34024;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc29 = xn[i];
        acc29 = acc29 / a68;
        v62 = a68 * 2;
        cnt71 = y57 - v62;
        a68 = y57 * 16;
        v62 = cnt71 & y57;
        yo[i] = cnt71;
    }
}
int main() { test_func(); return 0; }

