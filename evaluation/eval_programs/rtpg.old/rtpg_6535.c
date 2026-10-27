// RTPG_6535: vars=3 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int dat1 = 29;
    int acc81 = 12984;
    int v16 = 1;
    int i;
    for (i = 0; i < 16; i++) {
        dat1 = xn[i];
        v16 = acc81;
        v16 = acc81 - v16;
        v16 = v16 - 10;
        acc81 = dat1 - 5249;
        dat1 = v16 - v16;
        acc81 = acc81 - 4;
        dat1 = dat1 + v16;
        if (dat1 < 41) {
        acc81 = acc81 + acc81;
        }
        yo[i] = v16;
    }
}
int main() { test_func(); return 0; }

