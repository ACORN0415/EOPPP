// RTPG_4818: vars=8 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int b20 = 2;
    double lo23 = 12.18;
    int res4 = 34;
    int y29 = 24632;
    int b95 = 4790;
    int sum0 = -31;
    double cnt1 = 15.04;
    int tmp72 = 17251;
    int i;
    for (i = 0; i < 64; i++) {
        tmp72 = xn[i];
        y29 = y29 - 2;
        y29 = tmp72 + y29;
        lo23 = tmp72;
        tmp72 = tmp72 + 2;
        b20 = sum0 + cnt1;
        cnt1 = cnt1 - res4;
        y29 = y29 - 5;
        tmp72 = tmp72 - 4;
        sum0 = b20;
        yo[i] = cnt1;
    }
}
int main() { test_func(); return 0; }

