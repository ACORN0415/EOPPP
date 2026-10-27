// RTPG_4882: vars=3 stmts=7
enum State { FAST, GREEN, ON };
void test_func(void) {
    int out53 = 18;
    double b25 = 55.12;
    float cnt71 = 51.96;
    enum State st = FAST;
    int h0 = 76;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 69; i++) {
        cnt71 = out53 * 12802;
        b25 = b25 ^ cnt71;
        cnt71 = cnt71;
        b25 = cnt71 / out53;
        out53 = b25 - out53;
        b25 = out53 - b25;
        cnt71 = cnt71 & out53;
    }
}
int main() { test_func(); return 0; }

