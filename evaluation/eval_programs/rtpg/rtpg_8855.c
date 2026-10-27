// RTPG_8855: vars=4 stmts=5
int xn[32];
int yo[32];
enum State { FAST, ON, SLOW };
void test_func(void) {
    int res75 = 29494;
    int lo27 = 7;
    int res29 = 91;
    int tmp61 = 35745;
    enum State st = FAST;
    int h0 = 8;
    int sv0 = 0;
    int h1 = 18126;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res75 = xn[i];
        res75 = tmp61 * 81;
        res29 = lo27 + tmp61;
        res75 = res75 + tmp61;
        res75 = res29;
        tmp61 = lo27;
        yo[i] = tmp61;
    }
}
int main() { test_func(); return 0; }

