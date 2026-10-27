// RTPG_3242: vars=15 stmts=8
int xn[32];
int yo[32];
enum State { BLUE, OFF, FAST };
void test_func(void) {
    int dat24 = 43685;
    int lo1 = 8;
    int b46 = 1;
    int b1 = -4;
    int prev70 = -16;
    int out94 = 1;
    int val3 = 18037;
    int y51 = 1023;
    int a27 = 49;
    int y67 = 5;
    int sum34 = 4;
    int acc78 = 45;
    int out70 = -20;
    int acc51 = 21;
    int c25 = 36003;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 32; i++) {
        out70 = xn[i];
        c25 = y67 - acc51;
        sum34 = b1;
        out70 = lo1 + y51;
        prev70 = prev70 + 2;
        b46 = y67 - sum34;
        acc78 = acc51 - a27;
        out70 = out70 - 1;
        prev70 = lo1 + 40537;
        if (acc78 != 68) {
        a27 = a27 - 5;
        }
        yo[i] = acc51;
    }
}
int main() { test_func(); return 0; }

