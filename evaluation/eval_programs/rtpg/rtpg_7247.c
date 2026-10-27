// RTPG_7247: vars=4 stmts=8
void test_func(void) {
    int cnt23 = 9;
    int z39 = 40;
    int a15 = -14;
    int b25 = 18119;
    int i;
    for (i = 0; i < 29; i++) {
        a15 = b25 - cnt23;
        cnt23 = a15;
        cnt23 = z39 + -21;
        a15 = a15 - 5;
        a15 = a15 - 3;
        a15 = z39 - b25;
        z39 = z39 + cnt23;
        b25 = cnt23;
    }
}
int main() { test_func(); return 0; }

