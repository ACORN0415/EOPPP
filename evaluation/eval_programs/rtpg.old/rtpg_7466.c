// RTPG_7466: vars=3 stmts=2
enum State { FAST, ON, OFF };
void test_func(void) {
    int hi61 = 26;
    int lo89 = 38070;
    int dat91 = -14;
    enum State st = FAST;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        dat91 = hi61 * 17;
        hi61 = dat91 * 39075;
    }
}
int main() { test_func(); return 0; }

