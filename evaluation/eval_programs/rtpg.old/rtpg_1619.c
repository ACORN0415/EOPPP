// RTPG_1619: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int c38 = 7;
    int val24 = 23665;
    int sum30 = 48;
    int hi45 = 45;
    int y43 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        y43 = xn[i];
        y43 = y43 + 5;
        sum30 = c38;
        y43 = y43 - 4;
        yo[i] = hi45;
    }
}
int main() { test_func(); return 0; }

