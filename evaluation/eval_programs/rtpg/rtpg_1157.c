// RTPG_1157: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int sum20 = 1;
    int dat9 = 8;
    int sum78 = 47465;
    int a64 = -49;
    int i;
    for (i = 0; i < 64; i++) {
        sum78 = xn[i];
        a64 = sum20 - a64;
        sum20 = sum20 - dat9;
        sum78 = sum78 - 24613;
        yo[i] = dat9;
    }
}
int main() { test_func(); return 0; }

