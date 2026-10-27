// RTPG_3533: vars=8 stmts=4
int xn[64];
int yo[64];
enum State { BLUE, GREEN, ON };
void test_func(void) {
    int out30 = 13;
    int hi34 = -13;
    int dat21 = 32;
    int x20 = 5062;
    int tmp86 = 10618;
    int prev25 = 37;
    int tmp57 = 19529;
    int val69 = 38780;
    enum State st = BLUE;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 8189;
    int sv1 = 0;
    int h2 = 9879;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        val69 = xn[i];
        x20 = val69 * 30;
        out30 = out30 - prev25;
        tmp86 = tmp57 * 301;
        tmp86 = dat21 * 35;
        if (val69 > 30) {
        out30 = tmp86 - tmp86;
        }
        yo[i] = dat21;
    }
}
int main() { test_func(); return 0; }

