// RTPG_6031: vars=3 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int dat60 = 37;
    int sum60 = 13770;
    int sum1 = 8;
    int h0 = 15746;
    int sv0 = 0;
    int h1 = 72;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat60 = xn[i];
        sum60 = sum60 + dat60;
        dat60 = sum60 * 14451;
        sum1 = sum60 - 47626;
        sum60 = sum60 - sum1;
        dat60 = dat60 + sum1;
        dat60 = dat60 - 3;
        sum1 = dat60 - sum60;
        dat60 = sum60;
        dat60 = sum1 + 8;
        sum1 = dat60 + sum1;
        sum1 = sum1 + 26;
        sum1 = sum1 - sum60;
        yo[i] = dat60;
    }
}
int main() { test_func(); return 0; }

