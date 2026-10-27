// RTPG_2099: vars=8 stmts=8
void test_func(void) {
    int c24 = 8;
    int tmp87 = 59;
    int z88 = 49497;
    int res54 = 64372;
    int sum65 = 48384;
    int cur75 = 7;
    int tmp64 = -17;
    int a93 = 771;
    int i;
    for (i = 0; i < 17; i++) {
        res54 = res54;
        cur75 = sum65 + c24;
        tmp87 = tmp87;
        c24 = c24 + 2;
        res54 = res54 + sum65;
        c24 = z88;
        z88 = z88 + c24;
        tmp64 = tmp87 + cur75;
        if (sum65 > 31) goto done;
    }
done:
    res54 = 0;
}
int main() { test_func(); return 0; }

