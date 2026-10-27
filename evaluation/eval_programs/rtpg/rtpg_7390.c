// RTPG_7390: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int out40 = 0;
    int res36 = 6488;
    int sum30 = 6;
    int i;
    for (i = 0; i < 16; i++) {
        res36 = xn[i];
        sum30 = res36 - sum30;
        sum30 = res36;
        res36 = res36 + out40;
        res36 = sum30 + out40;
        sum30 = sum30 + 8937;
        res36 = sum30 + out40;
        res36 = sum30 - out40;
        res36 = sum30 + -10;
        if (res36 > 80) {
        res36 = res36 - sum30;
        }
        yo[i] = res36;
    }
}
int main() { test_func(); return 0; }

