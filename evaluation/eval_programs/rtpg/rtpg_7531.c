// RTPG_7531: vars=8 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int y41 = 32;
    int b89 = 23;
    int prev89 = 8;
    int val53 = -24;
    int lo17 = 37;
    int cnt32 = 4;
    int out95 = 2;
    int prev93 = 33437;
    int h0 = 64704;
    int sv0 = 0;
    int h1 = -37;
    int sv1 = 0;
    int h2 = 56896;
    int sv2 = 0;
    int h3 = 15873;
    int sv3 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out95 = xn[i];
        b89 = prev93 + -15;
        out95 = cnt32 * 1;
        prev93 = b89 - prev89;
        prev93 = val53 * 30;
        out95 = cnt32;
        prev89 = out95 * 9;
        if (cnt32 > 60) {
        y41 = y41 + 2;
        }
        yo[i] = prev93;
    }
}
int main() { test_func(); return 0; }

