// RTPG_2750: vars=15 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int b67 = 25450;
    int cnt97 = -7;
    int cur90 = 8;
    int c80 = 57823;
    int acc43 = 10769;
    int cnt1 = 10963;
    int a16 = 3;
    int res91 = -42;
    int out90 = 21265;
    int prev14 = 46045;
    int y3 = 1;
    int a68 = 32;
    int hi81 = 20537;
    int dat46 = 60217;
    int v78 = 10;
    int i;
    for (i = 0; i < 64; i++) {
        acc43 = xn[i];
        b67 = cnt97 - 8;
        cur90 = cur90 - 3;
        res91 = acc43 ^ dat46;
        a68 = v78 + a16;
        dat46 = dat46 - y3;
        prev14 = acc43 + res91;
        prev14 = dat46 & y3;
        c80 = cur90 + 21677;
        acc43 = res91 - cnt97;
        res91 = y3 ^ dat46;
        yo[i] = cur90;
    }
}
int main() { test_func(); return 0; }

