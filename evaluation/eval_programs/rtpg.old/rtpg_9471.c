// RTPG_9471: vars=20 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int b74 = 31063;
    int v57 = 1;
    int dat82 = 30;
    int c78 = 14;
    int cur25 = 6640;
    int prev58 = 59678;
    int prev73 = 100;
    int tmp26 = 15522;
    int c5 = 1;
    int cnt11 = 18641;
    int c17 = 57;
    int acc70 = 10;
    int prev2 = 1;
    int cnt58 = 3;
    int x24 = 6;
    int z18 = 53192;
    int lo53 = 3;
    int prev24 = 10622;
    int acc31 = 41;
    int x0 = 16342;
    int *ptr = &v57;
    int i;
    for (i = 0; i < 64; i++) {
        prev73 = xn[i];
        c78 = c78 - 7352;
        acc70 = x0 + v57;
        prev73 = lo53;
        c5 = acc70 + 71;
        c78 = c78 + 5;
        prev58 = prev58 - 5;
        c78 = prev58;
        c5 = prev2 + prev58;
        lo53 = c5 - prev58;
        x24 = x24 - 5;
        prev58 = c5 - c78;
        *ptr = *ptr + 3;
        yo[i] = c5;
    }
}
int main() { test_func(); return 0; }

