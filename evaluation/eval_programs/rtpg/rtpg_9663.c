// RTPG_9663: vars=6 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int hi57 = 8;
    int v23 = 60;
    int y24 = 1;
    int lo28 = 84;
    int sum99 = 80;
    int z23 = 71;
    int i;
    for (i = 0; i < 64; i++) {
        hi57 = xn[i];
        v23 = hi57 - sum99;
        hi57 = hi57 + sum99;
        v23 = v23 + sum99;
        v23 = sum99 - -41;
        lo28 = y24 + hi57;
        sum99 = hi57 + 5;
        lo28 = v23 + lo28;
        hi57 = y24 - hi57;
        if (z23 > 60242) goto done;
        yo[i] = v23;
    }
done:
    z23 = 0;
}
int main() { test_func(); return 0; }

