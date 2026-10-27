// RTPG_7146: vars=5 stmts=3
void test_func(void) {
    int b78 = 47;
    int val82 = 10250;
    int dat96 = 44;
    int tmp82 = 58;
    int x55 = 20;
    int i;
    for (i = 0; i < 43; i++) {
        val82 = val82 + 1;
        val82 = val82 - 18;
        val82 = dat96 - b78;
        if (dat96 > 75) goto done;
        if (tmp82 < 79) {
        b78 = tmp82;
        }
    }
done:
    b78 = 0;
}
int main() { test_func(); return 0; }

