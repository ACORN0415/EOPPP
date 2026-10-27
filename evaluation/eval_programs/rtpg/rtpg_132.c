// RTPG_132: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int val73 = 28750;
    int v14 = 6;
    int c65 = -50;
    int dat78 = -7;
    int res12 = 42;
    int i;
    for (i = 0; i < 32; i++) {
        v14 = xn[i];
        c65 = res12 + 40;
        dat78 = dat78 + 5;
        res12 = val73 - dat78;
        yo[i] = res12;
    }
}
int main() { test_func(); return 0; }

