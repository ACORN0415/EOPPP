// RTPG_7248: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    float v67 = 59.08;
    int val24 = 3;
    int a27 = 39324;
    int lo86 = 66;
    float cnt53 = 59.82;
    int res44 = -13;
    int prev93 = -8;
    int h0 = 27;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res44 = xn[i];
        a27 = val24 * 4;
        v67 = val24 + a27;
        prev93 = prev93 - 4;
        res44 = cnt53 * -3;
        yo[i] = a27;
    }
}
int main() { test_func(); return 0; }

