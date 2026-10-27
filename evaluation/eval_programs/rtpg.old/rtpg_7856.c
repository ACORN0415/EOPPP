// RTPG_7856: vars=7 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev69 = -40;
    int prev99 = 79;
    int c61 = 3;
    int b74 = 8767;
    int b80 = 37225;
    int z3 = 9;
    int val80 = 88;
    int i;
    for (i = 0; i < 64; i++) {
        val80 = xn[i];
        val80 = val80 - 35;
        prev69 = c61 - b74;
        z3 = z3 - 2;
        prev99 = prev69 - prev69;
        prev69 = prev99;
        yo[i] = val80;
    }
}
int main() { test_func(); return 0; }

