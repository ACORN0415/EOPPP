// RTPG_4957: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int res66 = 12;
    int dat81 = 4756;
    int v21 = 42;
    int c15 = 29;
    int sum31 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        c15 = xn[i];
        c15 = c15 + 1;
        c15 = c15 - 1;
        v21 = c15 - res66;
        if (dat81 > 55) {
        dat81 = dat81 + 3;
        }
        yo[i] = c15;
    }
}
int main() { test_func(); return 0; }

