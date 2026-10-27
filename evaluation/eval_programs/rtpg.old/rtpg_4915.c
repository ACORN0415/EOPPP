// RTPG_4915: vars=8 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int prev96 = 10;
    int sum46 = 62749;
    int cur16 = 38;
    int dat76 = 7;
    int lo87 = 39;
    int v94 = 77;
    int res45 = 39;
    int x54 = 8;
    int *ptr = &lo87;
    int i;
    for (i = 0; i < 16; i++) {
        sum46 = xn[i];
        v94 = sum46 + dat76;
        dat76 = lo87 - cur16;
        *ptr = *ptr + 3;
        if (sum46 > 49) goto done;
        yo[i] = dat76;
    }
done:
    sum46 = 0;
}
int main() { test_func(); return 0; }

