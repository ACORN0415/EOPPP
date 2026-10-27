// RTPG_4693: vars=6 stmts=8
int xn[64];
int yo[64];
enum State { FAST, SLOW, BLUE };
void test_func(void) {
    int cur0 = 8;
    int val96 = 27229;
    int b46 = 44;
    int sum27 = 91;
    int dat74 = 58;
    int a30 = 1;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        val96 = xn[i];
        sum27 = dat74;
        a30 = b46;
        val96 = cur0 - sum27;
        val96 = val96 - 1;
        val96 = b46 + a30;
        val96 = cur0;
        cur0 = val96 + val96;
        dat74 = a30;
        if (a30 != 54) {
        cur0 = b46 + 24188;
        }
        yo[i] = dat74;
    }
}
int main() { test_func(); return 0; }

