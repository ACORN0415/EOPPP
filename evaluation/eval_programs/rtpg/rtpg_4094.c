// RTPG_4094: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int tmp34 = 13;
    int out8 = 0;
    int val88 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        tmp34 = xn[i];
        out8 = out8;
        out8 = val88 + val88;
        val88 = out8 + val88;
        yo[i] = out8;
    }
}
int main() { test_func(); return 0; }

