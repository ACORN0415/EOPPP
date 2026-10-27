// RTPG_3630: vars=3 stmts=7
int xn[32];
int yo[32];
enum State { SLOW, BLUE, GREEN };
void test_func(void) {
    int acc15 = 4;
    int v63 = 32;
    int acc56 = 37479;
    enum State st = SLOW;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc56 = xn[i];
        v63 = v63 + 4;
        acc56 = acc56 - acc15;
        acc56 = acc56 + acc15;
        acc15 = acc56 - acc15;
        v63 = v63 * 91;
        v63 = v63 * 1;
        acc15 = acc56 - acc15;
        if (v63 < 73) {
        acc56 = v63 - acc56;
        }
        yo[i] = acc15;
    }
}
int main() { test_func(); return 0; }

