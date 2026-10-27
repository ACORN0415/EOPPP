// RTPG_4533: vars=3 stmts=5
void test_func(void) {
    int dat53 = 41029;
    int res58 = 3;
    int out79 = 30;
    int i;
    for (i = 0; i < 59; i++) {
        dat53 = dat53 + 1;
        out79 = out79;
        res58 = out79 + 11;
        dat53 = dat53 + 1;
        res58 = dat53 + -47;
        if (dat53 > 20) goto done;
        if (res58 > 67) {
        out79 = dat53 + out79;
        }
    }
done:
    dat53 = 0;
}
int main() { test_func(); return 0; }

