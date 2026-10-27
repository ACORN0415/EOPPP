// RTPG_2227: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int cur18 = 7;
    int c19 = 7;
    int prev78 = 76;
    int res17 = 4;
    int y88 = 10464;
    int dat90 = 7;
    int dat7 = 100;
    int hi78 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        prev78 = xn[i];
        c19 = prev78 + hi78;
        y88 = y88 - 2;
        prev78 = res17 - cur18;
        hi78 = y88 - dat90;
        res17 = c19 + 9;
        prev78 = dat7 - -18;
        yo[i] = c19;
    }
}
int main() { test_func(); return 0; }

