// RTPG_3209: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int dat71 = 63;
    int acc76 = 29;
    int res50 = 44;
    int i;
    for (i = 0; i < 32; i++) {
        res50 = xn[i];
        dat71 = dat71;
        acc76 = res50 + acc76;
        res50 = res50;
        res50 = acc76;
        res50 = dat71 - acc76;
        acc76 = acc76 + 5;
        res50 = res50 + -30;
        res50 = res50 - 1;
        yo[i] = res50;
    }
}
int main() { test_func(); return 0; }

