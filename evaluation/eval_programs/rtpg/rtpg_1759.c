// RTPG_1759: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int dat24 = 5;
    int c53 = 3727;
    int sum85 = -42;
    int acc7 = 39123;
    int val14 = 95;
    int i;
    for (i = 0; i < 64; i++) {
        c53 = xn[i];
        c53 = sum85 + val14;
        c53 = val14 - acc7;
        dat24 = sum85 + dat24;
        dat24 = val14;
        if (acc7 <= 16) {
        dat24 = acc7;
        }
        yo[i] = dat24;
    }
}
int main() { test_func(); return 0; }

