// RTPG_5461: vars=6 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int a42 = -8;
    int lo92 = 30;
    int z87 = 19;
    int acc59 = 7;
    int y53 = 18;
    int c83 = -33;
    int i;
    for (i = 0; i < 16; i++) {
        lo92 = xn[i];
        c83 = a42 + -33;
        a42 = a42 - 4;
        y53 = y53 + 2;
        yo[i] = c83;
    }
}
int main() { test_func(); return 0; }

