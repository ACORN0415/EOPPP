// RTPG_8815: vars=5 stmts=11
void test_func(void) {
    int prev53 = 28548;
    int b82 = 56;
    int out49 = 4;
    int b77 = -30;
    int res56 = 24;
    int i;
    for (i = 0; i < 33; i++) {
        b82 = b77 - 1;
        prev53 = b82;
        b77 = b77 % out49;
        out49 = b82 + out49;
        out49 = out49 | res56;
        b82 = prev53 + 4;
        res56 = b77;
        prev53 = prev53 - out49;
        b82 = b82 + 1;
        b77 = b77 + 5;
        out49 = out49 - b77;
        if (res56 > 19073) goto done;
        if (out49 >= -17) {
        res56 = prev53 + 9;
        }
    }
done:
    b82 = 0;
}
int main() { test_func(); return 0; }

