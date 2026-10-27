// RTPG_6893: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int hi7 = 0;
    int c70 = 54719;
    int b13 = 4;
    int i;
    for (i = 0; i < 32; i++) {
        b13 = xn[i];
        hi7 = hi7 - 81;
        b13 = hi7;
        b13 = b13 + 2;
        b13 = b13 + 4;
        b13 = c70 + b13;
        yo[i] = c70;
    }
}
int main() { test_func(); return 0; }

