// RTPG_2633: vars=3 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int prev5 = 60972;
    int lo34 = 9;
    int cnt91 = 36;
    int h0 = 1;
    int sv0 = 0;
    int h1 = -33;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo34 = xn[i];
        cnt91 = lo34 + cnt91;
        cnt91 = prev5 + cnt91;
        prev5 = cnt91 - prev5;
        prev5 = lo34 - prev5;
        prev5 = cnt91 * 52;
        lo34 = lo34 + cnt91;
        yo[i] = lo34;
    }
}
int main() { test_func(); return 0; }

