// RTPG_8402: vars=6 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int res23 = 78;
    int lo51 = 9;
    int dat85 = 40816;
    int y92 = 72;
    int v69 = 9;
    int cnt82 = 9;
    int h0 = 28949;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int h2 = 23;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y92 = xn[i];
        cnt82 = res23 * 2;
        res23 = lo51 * 8;
        cnt82 = y92 * 8;
        dat85 = y92 * 4;
        v69 = lo51 - y92;
        lo51 = lo51 + 3;
        lo51 = cnt82 * 12;
        if (dat85 == 55) {
        dat85 = lo51;
        }
        yo[i] = cnt82;
    }
}
int main() { test_func(); return 0; }

