// RTPG_4977: vars=8 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int v94 = 10;
    int cur16 = 62749;
    int res45 = 38;
    int lo87 = 7;
    int sum46 = 39;
    int dat76 = 77;
    int prev96 = 39;
    int x54 = 8;
    int *ptr = &sum46;
    int i;
    for (i = 0; i < 16; i++) {
        cur16 = xn[i];
        dat76 = cur16 + lo87;
        lo87 = sum46 - res45;
        *ptr = *ptr + 3;
        if (cur16 > 49) goto done;
        yo[i] = lo87;
    }
done:
    cur16 = 0;
}
int main() { test_func(); return 0; }

