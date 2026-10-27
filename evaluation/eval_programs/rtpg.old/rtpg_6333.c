// RTPG_6333: vars=8 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int hi53 = 21;
    int hi92 = -22;
    int z16 = 23674;
    int hi99 = 45;
    int cnt73 = 59875;
    int out34 = 49;
    int dat74 = 83;
    int lo30 = 8;
    int h0 = 18;
    int sv0 = 0;
    int h1 = 100;
    int sv1 = 0;
    int h2 = 28;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out34 = xn[i];
        hi53 = hi99 - out34;
        hi53 = hi99 + z16;
        hi53 = lo30 - hi53;
        hi92 = hi53 + hi92;
        out34 = cnt73 - 83;
        out34 = hi92 + 40;
        yo[i] = z16;
    }
}
int main() { test_func(); return 0; }

