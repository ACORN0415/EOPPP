// RTPG_2809: vars=4 stmts=5
void test_func(void) {
    int cnt96 = 28;
    int c36 = 10;
    int prev62 = 4;
    int acc82 = 99;
    int *ptr = &acc82;
    int i;
    for (i = 0; i < 60; i++) {
        cnt96 = cnt96 - 2;
        c36 = acc82 - c36;
        acc82 = acc82 + 4;
        cnt96 = cnt96 + cnt96;
        acc82 = cnt96 + 27861;
        *ptr = *ptr + 4;
        if (c36 > 14) goto done;
    }
done:
    prev62 = 0;
}
int main() { test_func(); return 0; }

