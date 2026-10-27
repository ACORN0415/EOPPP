// RTPG_1577: vars=8 stmts=11
int idx_arr[32];
void test_func(void) {
    float acc23 = 79.65;
    int out26 = 81;
    int b78 = 26315;
    float cur95 = 91.76;
    int x52 = 16;
    int cur8 = -38;
    int lo20 = 1;
    int sum98 = 43119;
    int i;
    for (i = 0; i < 13; i++) {
        b78 = xn[idx_arr[i]];
        x52 = b78 - out26;
        cur8 = cur95 - acc23;
        cur95 = lo20 - 78;
        b78 = lo20 + x52;
        sum98 = cur8 - sum98;
        cur8 = x52 - b78;
        sum98 = b78;
        sum98 = out26 - cur8;
        b78 = lo20 + cur8;
        x52 = x52 + 2;
        b78 = lo20 + sum98;
    }
}
int main() { test_func(); return 0; }

