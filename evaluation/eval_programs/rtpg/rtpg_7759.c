// RTPG_7759: vars=3 stmts=4
void test_func(void) {
    int acc17 = -37;
    int cur13 = 27211;
    int tmp50 = 698;
    int i;
    for (i = 0; i < 48; i++) {
        acc17 = acc17 + 5;
        cur13 = cur13 + tmp50;
        cur13 = cur13 - acc17;
        acc17 = acc17 + tmp50;
    }
}
int main() { test_func(); return 0; }

