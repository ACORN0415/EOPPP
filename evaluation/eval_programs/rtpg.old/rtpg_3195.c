// RTPG_3195: vars=4 stmts=5
void test_func(void) {
    int res36 = 39;
    int dat68 = -3;
    int a39 = -12;
    int prev31 = 55418;
    int i;
    for (i = 0; i < 97; i++) {
        prev31 = prev31 - 4;
        prev31 = a39 + prev31;
        a39 = prev31 ^ prev31;
        prev31 = dat68 - res36;
        res36 = dat68 + res36;
        if (prev31 > 38) goto done;
    }
done:
    dat68 = 0;
}
int main() { test_func(); return 0; }

