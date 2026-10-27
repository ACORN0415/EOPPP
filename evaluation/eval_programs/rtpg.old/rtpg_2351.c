// RTPG_2351: vars=8 stmts=8
void test_func(void) {
    int tmp28 = 14356;
    int prev78 = 13;
    int dat68 = 61;
    int cnt90 = 37491;
    int sum48 = 4;
    int prev84 = 56;
    int res58 = 5;
    int b75 = 26;
    int *ptr = &b75;
    int i;
    for (i = 0; i < 93; i++) {
        sum48 = prev78 + res58;
        prev84 = prev84 - 3;
        dat68 = cnt90;
        cnt90 = cnt90 - 5;
        dat68 = dat68 + prev84;
        sum48 = prev78;
        sum48 = sum48 - 5;
        sum48 = prev78 + tmp28;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

