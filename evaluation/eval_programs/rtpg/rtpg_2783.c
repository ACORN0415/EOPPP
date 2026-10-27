// RTPG_2783: vars=7 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int c74 = 24;
    int sum17 = 6;
    int sum32 = 30;
    int lo67 = 60;
    int cnt43 = 97;
    int out32 = 7;
    int res0 = 60;
    int i;
    for (i = 0; i < 16; i++) {
        out32 = xn[i];
        sum17 = c74;
        c74 = sum17 - sum32;
        lo67 = res0 - lo67;
        out32 = sum17 - sum32;
        sum17 = cnt43 + sum32;
        res0 = res0 + 1;
        res0 = res0 + 4;
        out32 = out32 - 1;
        sum32 = cnt43 - 73;
        cnt43 = c74 - 10;
        yo[i] = cnt43;
    }
}
int main() { test_func(); return 0; }

