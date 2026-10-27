// RTPG_7608: vars=6 stmts=5
void test_func(void) {
    int y92 = 38;
    int c0 = 4;
    int val3 = 1723;
    int y94 = 2;
    int cur91 = 80;
    int z35 = 18209;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 75; i++) {
        y94 = y94 | val3;
        val3 = val3 + 3;
        c0 = y94 | y94;
        y94 = z35;
        cur91 = z35 - cur91;
    }
}
int main() { test_func(); return 0; }

