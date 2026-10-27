// RTPG_1852: vars=3 stmts=8
void test_func(void) {
    int a52 = 30;
    int z54 = 65;
    int acc99 = 45004;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 69;
    int sv1 = 0;
    int i;
    for (i = 0; i < 12; i++) {
        z54 = z54 * 3;
        a52 = acc99 * 12;
        acc99 = acc99 - a52;
        a52 = a52;
        z54 = acc99 * 1;
        a52 = a52 + 5;
        z54 = a52 + acc99;
        acc99 = a52 + z54;
    }
}
int main() { test_func(); return 0; }

