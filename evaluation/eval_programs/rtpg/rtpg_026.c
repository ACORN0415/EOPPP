// RTPG_26: vars=7 stmts=5
void test_func(void) {
    int hi14 = 0;
    int prev99 = 99;
    int lo23 = 12484;
    int b61 = 32;
    int cur78 = 36;
    int x87 = 28;
    int cnt56 = 8;
    int *ptr = &cnt56;
    int i;
    for (i = 0; i < 56; i++) {
        b61 = prev99;
        lo23 = hi14;
        cur78 = cur78 - 60175;
        cnt56 = cnt56 - 1;
        cnt56 = b61 + lo23;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

