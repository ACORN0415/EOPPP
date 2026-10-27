// RTPG_3296: vars=9 stmts=5
int xn[16];
int yo[16];
enum State { BLUE, FAST, ON };
void test_func(void) {
    int z36 = -8;
    int res4 = -40;
    int b88 = 2;
    int out75 = -21;
    int tmp85 = 26622;
    int tmp4 = 50;
    int lo62 = 20;
    int a71 = 27;
    int val74 = -33;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 16; i++) {
        res4 = xn[i];
        z36 = z36 + tmp4;
        tmp85 = b88;
        a71 = tmp85 + tmp4;
        b88 = val74 - 26;
        tmp85 = tmp85 + 1;
        yo[i] = a71;
    }
}
int main() { test_func(); return 0; }

