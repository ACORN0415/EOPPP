// RTPG_5434: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    float dat71 = 59.14;
    double b75 = 24.51;
    int cnt27 = -3;
    int dat19 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        cnt27 = xn[i];
        dat71 = cnt27;
        cnt27 = b75;
        b75 = b75 + dat71;
        dat71 = b75 - -18;
        dat19 = cnt27 + 1;
        dat19 = dat71 + 44;
        cnt27 = cnt27 + 1;
        dat71 = dat19 - 5111;
        if (dat19 == 52) {
        b75 = b75;
        }
        yo[i] = dat71;
    }
}
int main() { test_func(); return 0; }

