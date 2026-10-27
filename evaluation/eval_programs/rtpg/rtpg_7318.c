// RTPG_7318: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    float res44 = 59.08;
    int cnt53 = 3;
    int prev93 = 39324;
    int v67 = 66;
    float a27 = 59.82;
    int lo86 = -13;
    int val24 = -8;
    int h0 = 27;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo86 = xn[i];
        prev93 = cnt53 * 4;
        res44 = cnt53 + prev93;
        val24 = val24 - 4;
        lo86 = a27 * -3;
        yo[i] = prev93;
    }
}
int main() { test_func(); return 0; }

