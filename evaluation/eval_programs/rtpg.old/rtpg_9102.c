// RTPG_9102: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int c19 = -28;
    int c42 = 90;
    int acc81 = 14747;
    int i;
    for (i = 0; i < 16; i++) {
        acc81 = xn[i];
        acc81 = c19 - c19;
        acc81 = acc81 + 3;
        c42 = c42 + acc81;
        c19 = c19;
        c42 = c19 + 74;
        yo[i] = c42;
    }
}
int main() { test_func(); return 0; }

