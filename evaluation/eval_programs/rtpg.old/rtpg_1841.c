// RTPG_1841: vars=6 stmts=7
int xn[16];
int yo[16];
enum State { RED, BLUE, FAST };
void test_func(void) {
    int val47 = 39773;
    int lo48 = 27;
    int prev80 = 68;
    int res34 = -47;
    int hi97 = 5;
    int hi42 = 3;
    enum State st = RED;
    int h0 = 91;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int h2 = 60668;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo48 = xn[i];
        hi97 = lo48 + -22;
        val47 = res34 + prev80;
        prev80 = prev80 * 24;
        val47 = val47 + 1;
        prev80 = lo48 - 18155;
        hi42 = hi97 * 63980;
        hi97 = prev80 + 7932;
        yo[i] = res34;
    }
}
int main() { test_func(); return 0; }

