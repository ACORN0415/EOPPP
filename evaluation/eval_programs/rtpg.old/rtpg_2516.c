// RTPG_2516: vars=4 stmts=6
void test_func(void) {
    int acc80 = 99;
    int v7 = 13;
    int z54 = -46;
    int acc21 = -49;
    int i;
    for (i = 0; i < 9; i++) {
        acc21 = v7 + z54;
        acc21 = z54;
        z54 = z54 + 1;
        acc21 = z54 + v7;
        z54 = acc80 - z54;
        z54 = acc21 - acc21;
        if (v7 <= -34) {
        acc21 = v7 + 22392;
        }
    }
}
int main() { test_func(); return 0; }

