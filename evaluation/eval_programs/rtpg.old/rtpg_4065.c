// RTPG_4065: vars=3 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int val88 = 13;
    int out8 = 0;
    int tmp34 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        val88 = xn[i];
        out8 = out8;
        out8 = tmp34 + tmp34;
        tmp34 = out8 + tmp34;
        yo[i] = out8;
    }
}
int main() { test_func(); return 0; }

