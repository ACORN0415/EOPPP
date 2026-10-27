// RTPG_967: vars=3 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int x24 = 66;
    int c2 = 40;
    int prev71 = 27696;
    int i;
    for (i = 0; i < 64; i++) {
        c2 = xn[i];
        prev71 = c2 - prev71;
        prev71 = x24 - prev71;
        c2 = x24 + prev71;
        c2 = x24 - x24;
        if (x24 == 85) {
        x24 = prev71 + x24;
        }
        yo[i] = prev71;
    }
}
int main() { test_func(); return 0; }

