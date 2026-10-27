// RTPG_5564: vars=5 stmts=3
void test_func(void) {
    double b25 = 85.22;
    int dat65 = 13;
    int hi26 = 38;
    int hi69 = 0;
    int val1 = 30;
    int i;
    for (i = 0; i < 60; i++) {
        hi26 = dat65 - hi69;
        b25 = b25 - 2;
        hi69 = b25 - dat65;
    }
}
int main() { test_func(); return 0; }

