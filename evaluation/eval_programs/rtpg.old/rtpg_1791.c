// RTPG_1791: vars=4 stmts=4
void test_func(void) {
    int sum26 = 68;
    int val64 = 8;
    int cur26 = 50169;
    int lo70 = 31518;
    int i;
    for (i = 0; i < 55; i++) {
        val64 = sum26 + cur26;
        lo70 = lo70 - val64;
        lo70 = cur26 - sum26;
        val64 = sum26 + 36;
        if (cur26 > 9) goto done;
    }
done:
    sum26 = 0;
}
int main() { test_func(); return 0; }

