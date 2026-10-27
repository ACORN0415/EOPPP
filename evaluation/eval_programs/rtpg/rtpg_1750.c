// RTPG_1750: vars=3 stmts=12
int xn[16];
int yo[16];
enum State { RED, GREEN, FAST };
void test_func(void) {
    int prev53 = 47;
    int y71 = 33;
    int res36 = 6;
    enum State st = RED;
    int h0 = 10278;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res36 = xn[i];
        y71 = res36 - y71;
        res36 = y71 - res36;
        res36 = y71 * 0;
        prev53 = prev53 + 4;
        res36 = prev53 * 10;
        y71 = res36 * 29;
        res36 = y71;
        res36 = res36 - y71;
        res36 = res36 + 5;
        res36 = y71 * -44;
        res36 = y71 + res36;
        prev53 = res36 + 6;
        yo[i] = prev53;
    }
}
int main() { test_func(); return 0; }

