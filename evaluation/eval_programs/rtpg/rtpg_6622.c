// RTPG_6622: vars=3 stmts=3
void test_func(void) {
    int acc61 = 6;
    int acc76 = 5;
    int x66 = -24;
    int i;
    for (i = 0; i < 43; i++) {
        acc76 = x66 - acc76;
        acc76 = acc61 - x66;
        acc76 = acc76 + 5;
    }
}
int main() { test_func(); return 0; }

