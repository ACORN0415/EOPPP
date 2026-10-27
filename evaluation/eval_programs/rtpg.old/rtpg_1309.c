// RTPG_1309: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev90 = 19;
    int cnt93 = 26;
    int prev63 = 7;
    int *ptr = &prev63;
    int i;
    for (i = 0; i < 64; i++) {
        prev90 = xn[i];
        prev90 = prev63 - 12;
        cnt93 = cnt93 + 5;
        cnt93 = prev90 - prev63;
        prev90 = prev63 + 30191;
        prev90 = prev63 | prev63;
        *ptr = *ptr + 4;
        if (cnt93 <= 64) {
        prev63 = prev63 - cnt93;
        }
        yo[i] = prev90;
    }
}
int main() { test_func(); return 0; }

