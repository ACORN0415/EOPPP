// RTPG_4481: vars=3 stmts=3
void test_func(void) {
    int dat92 = 4;
    int hi35 = 48218;
    int b89 = 9562;
    int i;
    for (i = 0; i < 15; i++) {
        dat92 = dat92;
        b89 = dat92;
        b89 = b89 - 4;
        if (dat92 > 48) goto done;
    }
done:
    hi35 = 0;
}
int main() { test_func(); return 0; }

