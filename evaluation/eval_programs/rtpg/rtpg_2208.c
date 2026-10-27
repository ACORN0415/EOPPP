// RTPG_2208: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int cur18 = 7;
    int dat90 = 7;
    int prev78 = 76;
    int res17 = 4;
    int y88 = 10464;
    int hi78 = 7;
    int dat7 = 100;
    int c19 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        prev78 = xn[i];
        dat90 = prev78 + c19;
        y88 = y88 - 2;
        prev78 = res17 - cur18;
        c19 = y88 - hi78;
        res17 = dat90 + 9;
        prev78 = dat7 - -18;
        yo[i] = dat90;
    }
}
int main() { test_func(); return 0; }

