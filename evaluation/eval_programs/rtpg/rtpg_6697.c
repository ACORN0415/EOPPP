// RTPG_6697: vars=3 stmts=4
enum State { FAST, BLUE, GREEN };
void test_func(void) {
    int out47 = 53;
    int dat81 = 63374;
    int cur12 = 15;
    enum State st = FAST;
    int h0 = -3;
    int sv0 = 0;
    int h1 = -39;
    int sv1 = 0;
    int i;
    for (i = 0; i < 92; i++) {
        out47 = out47 & cur12;
        cur12 = cur12 - 3;
        cur12 = out47 ^ dat81;
        cur12 = cur12 & out47;
    }
}
int main() { test_func(); return 0; }

