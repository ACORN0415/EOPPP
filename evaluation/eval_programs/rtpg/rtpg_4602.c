// RTPG_4602: vars=4 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int res34 = 18;
    int cnt93 = 0;
    int cur3 = 30;
    int sum99 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        cur3 = xn[i];
        cur3 = sum99 + cur3;
        res34 = res34 + res34;
        cnt93 = cnt93 - 4;
        cur3 = cur3 + -24;
        cur3 = cur3 % res34;
        cnt93 = cnt93;
        sum99 = sum99 + 3;
        sum99 = sum99 - 4;
        yo[i] = cur3;
    }
}
int main() { test_func(); return 0; }

