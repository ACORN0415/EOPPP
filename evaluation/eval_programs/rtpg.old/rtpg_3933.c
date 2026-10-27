// RTPG_3933: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int c19 = 26;
    int hi16 = 0;
    int x81 = 4;
    int hi85 = 2817;
    int prev77 = 3;
    int cnt63 = 6;
    int res83 = 9;
    int val16 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        res83 = xn[i];
        prev77 = c19 & prev77;
        val16 = res83 - hi85;
        c19 = cnt63 | cnt63;
        x81 = val16 - -28;
        prev77 = prev77 + prev77;
        yo[i] = c19;
    }
}
int main() { test_func(); return 0; }

