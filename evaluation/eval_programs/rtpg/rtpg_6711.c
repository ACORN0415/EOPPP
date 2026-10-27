// RTPG_6711: vars=4 stmts=3
void test_func(void) {
    int out74 = 10;
    int val43 = -16;
    int z45 = 40776;
    int prev21 = -26;
    int i;
    for (i = 0; i < 43; i++) {
        val43 = val43 - 4;
        val43 = val43 - 78;
        val43 = val43 + out74;
        if (prev21 > 36) goto done;
    }
done:
    z45 = 0;
}
int main() { test_func(); return 0; }

