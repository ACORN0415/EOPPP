// RTPG_6736: vars=3 stmts=5
void test_func(void) {
    int z31 = 22;
    int res36 = 10;
    int cur60 = 99;
    int i;
    for (i = 0; i < 14; i++) {
        res36 = cur60;
        res36 = cur60;
        cur60 = z31 - cur60;
        z31 = z31;
        res36 = cur60 + 1885;
        if (cur60 > 4) goto done;
    }
done:
    cur60 = 0;
}
int main() { test_func(); return 0; }

