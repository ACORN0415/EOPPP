// RTPG_863: vars=5 stmts=12
void test_func(void) {
    float sum66 = 58.56;
    int prev73 = 6;
    int hi88 = 57914;
    int cnt4 = 10;
    int dat9 = 49;
    int i;
    for (i = 0; i < 7; i++) {
        dat9 = prev73 | cnt4;
        hi88 = cnt4;
        dat9 = prev73 ^ dat9;
        sum66 = hi88 - cnt4;
        prev73 = prev73 + 60;
        sum66 = dat9 & hi88;
        dat9 = dat9 - 5;
        hi88 = dat9;
        dat9 = hi88 - 72;
        prev73 = cnt4 | prev73;
        cnt4 = hi88 + -21;
        hi88 = hi88 % dat9;
        if (sum66 > 3) goto done;
    }
done:
    dat9 = 0;
}
int main() { test_func(); return 0; }

