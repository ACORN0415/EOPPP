// RTPG_4813: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int y57 = 12180;
    int x89 = 26;
    int b80 = 55;
    int dat15 = 0;
    int y76 = 43;
    int i;
    for (i = 0; i < 32; i++) {
        b80 = xn[i];
        dat15 = y57 - 5966;
        y57 = dat15;
        y57 = y57;
        yo[i] = y57;
    }
}
int main() { test_func(); return 0; }

