// RTPG_9366: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int b51 = 4;
    int prev49 = 10;
    int res1 = 4;
    int tmp3 = 32135;
    int i;
    for (i = 0; i < 64; i++) {
        res1 = xn[i];
        tmp3 = prev49;
        res1 = res1 - prev49;
        prev49 = prev49 + 47282;
        b51 = prev49 + tmp3;
        res1 = res1 + prev49;
        tmp3 = prev49 + res1;
        b51 = prev49;
        res1 = b51 + res1;
        if (b51 != 25) {
        res1 = tmp3 - b51;
        }
        yo[i] = res1;
    }
}
int main() { test_func(); return 0; }

