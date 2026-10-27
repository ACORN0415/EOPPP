// RTPG_3483: vars=4 stmts=3
void test_func(void) {
    int y30 = 24226;
    int b28 = 28;
    int dat23 = 58;
    int b47 = 78;
    int i;
    for (i = 0; i < 59; i++) {
        b47 = dat23 + b28;
        y30 = y30 - 2;
        b47 = b47 + -7;
    }
}
int main() { test_func(); return 0; }

