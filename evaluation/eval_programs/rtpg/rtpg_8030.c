// RTPG_8030: vars=5 stmts=5
void test_func(void) {
    int y91 = 40617;
    int prev62 = -41;
    int x14 = 75;
    int acc39 = 23;
    int tmp41 = 31;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 30; i++) {
        y91 = acc39 - 28;
        acc39 = acc39 + 5;
        prev62 = prev62 * -49;
        prev62 = prev62 + 1;
        tmp41 = tmp41 - 1;
        if (prev62 > 4) goto done;
    }
done:
    tmp41 = 0;
}
int main() { test_func(); return 0; }

