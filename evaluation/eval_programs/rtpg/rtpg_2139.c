// RTPG_2139: vars=8 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int lo14 = 24;
    int dat11 = 44;
    int hi63 = 97;
    int cnt11 = 452;
    int x38 = 28;
    int dat22 = 12813;
    int res96 = 73;
    int acc20 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        cnt11 = xn[i];
        dat11 = lo14 + 8;
        res96 = res96;
        dat22 = dat22 - acc20;
        res96 = x38 + acc20;
        cnt11 = dat22 + hi63;
        lo14 = x38 - hi63;
        cnt11 = cnt11 + 5;
        acc20 = dat22;
        acc20 = acc20 + 3;
        yo[i] = res96;
    }
}
int main() { test_func(); return 0; }

