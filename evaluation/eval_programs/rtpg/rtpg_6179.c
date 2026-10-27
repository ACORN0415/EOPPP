// RTPG_6179: vars=5 stmts=2
void test_func(void) {
    int v78 = 31;
    int cur31 = 76;
    int acc24 = 3;
    int res64 = -20;
    int b55 = 62;
    int i;
    for (i = 0; i < 22; i++) {
        res64 = res64;
        res64 = res64 - acc24;
        if (v78 > 1) goto done;
    }
done:
    res64 = 0;
}
int main() { test_func(); return 0; }

