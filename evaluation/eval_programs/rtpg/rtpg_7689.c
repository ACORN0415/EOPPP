// RTPG_7689: vars=6 stmts=5
void test_func(void) {
    int z35 = 38;
    int val3 = 4;
    int y92 = 1723;
    int c0 = 2;
    int y94 = 80;
    int cur91 = 18209;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 75; i++) {
        c0 = c0 | y92;
        y92 = y92 + 3;
        val3 = c0 | y94;
        c0 = cur91;
        y94 = cur91 - y94;
    }
}
int main() { test_func(); return 0; }

