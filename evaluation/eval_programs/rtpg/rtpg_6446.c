// RTPG_6446: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int x32 = 2;
    int acc12 = 85;
    int x2 = 77;
    int tmp69 = 10;
    int cnt93 = 0;
    int out52 = -9;
    int v71 = 39073;
    int dat87 = -28;
    int i;
    for (i = 0; i < 32; i++) {
        acc12 = xn[i];
        tmp69 = x32 + acc12;
        x2 = x2 + 3;
        x2 = x32;
        x32 = acc12 - cnt93;
        v71 = x2 + 68;
        cnt93 = cnt93 - 2;
        yo[i] = tmp69;
    }
}
int main() { test_func(); return 0; }

