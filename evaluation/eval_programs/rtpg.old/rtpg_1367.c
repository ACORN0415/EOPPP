// RTPG_1367: vars=3 stmts=7
void test_func(void) {
    int cur37 = 2;
    int cur97 = -42;
    int b95 = 44898;
    int i;
    for (i = 0; i < 73; i++) {
        cur97 = b95 + cur97;
        b95 = cur37 - 29;
        cur97 = b95 + 7;
        cur37 = cur37 - 2;
        cur37 = cur37 + b95;
        cur37 = cur37 + 2;
        cur37 = cur97 + 19;
        if (b95 > 73) goto done;
    }
done:
    cur37 = 0;
}
int main() { test_func(); return 0; }

