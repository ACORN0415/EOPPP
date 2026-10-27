// RTPG_7547: vars=4 stmts=10
void test_func(void) {
    int z56 = 42112;
    int a28 = 4;
    int acc41 = 98;
    int val24 = 63;
    int h0 = 105;
    int sv0 = 0;
    int h1 = 29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 52; i++) {
        z56 = a28;
        val24 = z56 * 0;
        z56 = acc41 / a28;
        z56 = a28 & acc41;
        a28 = z56 | a28;
        acc41 = acc41 % val24;
        a28 = acc41 - a28;
        val24 = z56 * 7912;
        a28 = val24 + z56;
        z56 = z56 % a28;
    }
}
int main() { test_func(); return 0; }

