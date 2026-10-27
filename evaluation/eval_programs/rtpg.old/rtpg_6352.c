// RTPG_6352: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int x2 = 2;
    int out52 = 85;
    int dat87 = 77;
    int tmp69 = 10;
    int acc12 = 0;
    int v71 = -9;
    int x32 = 39073;
    int cnt93 = -28;
    int i;
    for (i = 0; i < 32; i++) {
        out52 = xn[i];
        tmp69 = x2 + out52;
        dat87 = dat87 + 3;
        dat87 = x2;
        x2 = out52 - acc12;
        x32 = dat87 + 68;
        acc12 = acc12 - 2;
        yo[i] = tmp69;
    }
}
int main() { test_func(); return 0; }

