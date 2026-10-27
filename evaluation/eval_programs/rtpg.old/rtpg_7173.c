// RTPG_7173: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int x78 = 10;
    int hi75 = 45930;
    int v24 = 11015;
    int i;
    for (i = 0; i < 32; i++) {
        x78 = xn[i];
        hi75 = x78 - hi75;
        hi75 = hi75;
        hi75 = x78 + hi75;
        v24 = x78 + 9;
        x78 = v24 + x78;
        yo[i] = v24;
    }
}
int main() { test_func(); return 0; }

