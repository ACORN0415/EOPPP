// RTPG_1359: vars=3 stmts=7
void test_func(void) {
    int cur97 = 2;
    int cur37 = -42;
    int b95 = 44898;
    int i;
    for (i = 0; i < 73; i++) {
        cur37 = b95 + cur37;
        b95 = cur97 - 29;
        cur37 = b95 + 7;
        cur97 = cur97 - 2;
        cur97 = cur97 + b95;
        cur97 = cur97 + 2;
        cur97 = cur37 + 19;
        if (b95 > 73) goto done;
    }
done:
    cur97 = 0;
}
int main() { test_func(); return 0; }

