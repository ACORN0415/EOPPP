// RTPG_9072: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int cur8 = -39;
    int out1 = 42;
    int y71 = 3;
    int val34 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        y71 = xn[i];
        cur8 = out1 ^ y71;
        y71 = out1 & out1;
        out1 = out1 + y71;
        cur8 = out1 - 16760;
        yo[i] = cur8;
    }
}
int main() { test_func(); return 0; }

