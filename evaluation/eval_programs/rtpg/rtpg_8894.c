// RTPG_8894: vars=6 stmts=5
enum State { OFF, SLOW, GREEN };
void test_func(void) {
    int acc86 = 1;
    int cnt88 = 9;
    int c69 = -16;
    int hi6 = 14128;
    int a26 = 44103;
    int tmp97 = 22;
    enum State st = OFF;
    int *ptr = &a26;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 22; i++) {
        tmp97 = a26 * -30;
        hi6 = cnt88 + acc86;
        cnt88 = cnt88 - 2;
        hi6 = a26 - acc86;
        acc86 = a26 * 98;
        *ptr = *ptr + 4;
        if (hi6 > 74) {
        tmp97 = acc86 - a26;
        }
    }
}
int main() { test_func(); return 0; }

